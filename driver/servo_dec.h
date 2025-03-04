/*
    Date: 2024/10/20
    Author: MaxwellWang
    Describe: 
    Program:

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    */

#ifndef SERVO_DEC_H_
#define SERVO_DEC_H_

#include <stdint.h>
#include <conf_general.h>

// Functions
void servodec_init(void (*d_func)(void));
void servodec_stop(void);
void servodec_set_pulse_options(float start, float end, bool median_filter);
float servodec_get_servo(int servo_num);
uint32_t servodec_get_time_since_update(void);
float servodec_get_last_pulse_len(int servo_num);
bool servodec_is_running(void);

#endif /* SERVO_DEC_H_ */
