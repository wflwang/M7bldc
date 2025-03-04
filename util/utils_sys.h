/*
    Date: 2024/10/20
    Author: MaxwellWang
    Describe: 
    Program:

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    */

#ifndef UTILS_SYS_H_
#define UTILS_SYS_H_

#include <stdbool.h>
#include <stdint.h>
#include "datatypes.h"

void utils_sys_lock_cnt(void);
void utils_sys_unlock_cnt(void);
uint8_t utils_second_motor_id(void);
int utils_read_hall(bool is_second_motor, int samples);
const char* utils_hw_type_to_string(HW_TYPE hw);
int utils_check_min_stack_left(thread_t *th);
int utils_stack_left_now(void);
bool utils_is_func_valid(void *addr);

// Return the age of a timestamp in seconds
#define UTILS_AGE_S(x)		((float)chVTTimeElapsedSinceX(x) / (float)CH_CFG_ST_FREQUENCY)

#endif  /* UTILS_SYS_H_ */
