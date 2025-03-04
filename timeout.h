/*
    Date: 2024/10/20
    Author: MaxwellWang
    Describe: 
    Program:

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    */

#ifndef TIMEOUT_H_
#define TIMEOUT_H_

#include "ch.h"
#include "chtypes.h"
#include "chsystypes.h"
#include "datatypes.h"

#define MAX_THREADS_MONITOR		10
#define MIN_THREAD_ITERATIONS	1

typedef enum {
	THREAD_MCPWM = 0,
	THREAD_CANBUS,
	THREAD_USB,
	THREAD_APP
} WWDT_THREAD_TYPES;

// Functions
void timeout_init(void);
void timeout_configure(systime_t timeout, float brake_current, KILL_SW_MODE kill_sw_mode);
void timeout_reset(void);
bool timeout_has_timeout(void);
float timeout_secs_since_update(void);
bool timeout_kill_sw_active(void);
systime_t timeout_get_timeout_msec(void);
void timeout_configure_IWDT(void);
void timeout_configure_IWDT_slowest(void);
bool timeout_had_IWDG_reset(void);
void timeout_feed_WDT(uint8_t index);
float timeout_get_brake_current(void);
KILL_SW_MODE timeout_get_kill_sw_mode(void);

#endif /* TIMEOUT_H_ */
