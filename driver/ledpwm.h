/*
    Date: 2024/10/20
    Author: MaxwellWang
    Describe: 
    Program:

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    */

#ifndef LEDPWM_H_
#define LEDPWM_H_

#include "conf_general.h"

#ifdef LED_PWM4_ON
#define HW_LEDPWM_CH		4
#elif defined(LED_PWM3_ON)
#define HW_LEDPWM_CH		3
#elif defined(LED_PWM2_ON)
#define HW_LEDPWM_CH		2
#elif defined(LED_PWM1_ON)
#define HW_LEDPWM_CH		1
#else
#define HW_LEDPWM_CH		0
#endif

// Settings
#define LEDPWM_LED_NUM		(2 + HW_LEDPWM_CH)
#define LEDPWM_CNT_TOP		200

#define LED_GREEN			0
#define LED_RED				1
#define LED_HW1				2
#define LED_HW2				3
#define LED_HW3				4
#define LED_HW4				5

// Functions
void ledpwm_init(void);
void ledpwm_set_intensity(unsigned int led, float intensity);
void ledpwm_led_on(int led);
void ledpwm_led_off(int led);
void ledpwm_update_pwm(void);

#endif /* LEDPWM_H_ */
