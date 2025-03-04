/*
    Date: 2024/10/20
    Author: MaxwellWang
    Describe: 
    Program:

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "general.h"
#include "exception.h"

struct exception *innermost_exception;

void raise_exception(uint32_t type, const char *msg)
{
//	struct exception *e;
//	DEBUG("Exception: %s\n", msg);
//	for (e = innermost_exception; e; e = e->outer) {
//		if (e->mask & type) {
//			e->type = type;
//			e->msg = msg;
//			innermost_exception = e->outer;
//			longjmp(e->jmpbuf, type);
//		}
//	}
//	abort();
	(void)type;
	(void)msg;
}

