/*
    Date: 2024/10/20
    Author: MaxwellWang
    Describe: 
    Program:

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    */

#include "worker.h"
#include "ch.h"
#include "hal.h"

// Private types
typedef struct {
	void *arg;
	void(*func)(void *arg);
} worker_arg_t;

// Private variables
static thread_t *m_tp = 0;
static worker_arg_t m_wa;
static THD_WORKING_AREA(work_thread_wa, 512);
static THD_FUNCTION(work_thread, arg);

void worker_execute(void(*func)(void *arg), void *arg) {
	worker_wait();
	m_wa.func = func;
	m_wa.arg = arg;
	chThdCreateStatic(work_thread_wa, sizeof(work_thread_wa), NORMALPRIO, work_thread, &m_wa);
}

void worker_wait(void) {
	if (m_tp) {
		chThdWait(m_tp);
	}
}

static THD_FUNCTION(work_thread, arg) {
	chRegSetThreadName("Worker");
	m_tp = chThdGetSelfX();
	((worker_arg_t*)arg)->func(((worker_arg_t*)arg)->arg);
	m_tp = 0;
}
