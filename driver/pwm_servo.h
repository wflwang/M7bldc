/*
    Date: 2024/10/20
    Author: MaxwellWang
    Describe: 
    Program:

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    */

#ifndef DRIVER_PWM_SERVO_H_
#define DRIVER_PWM_SERVO_H_

#include <stdint.h>
#include <stdbool.h>

uint32_t pwm_servo_init(uint32_t freq_hz, float duty);
void pwm_servo_init_servo(void);
void pwm_servo_stop(void);
float pwm_servo_set_duty(float duty);
void pwm_servo_set_servo_out(float output);
bool pwm_servo_is_running(void);

#endif /* DRIVER_PWM_SERVO_H_ */
