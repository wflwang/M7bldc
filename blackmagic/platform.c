/*
    Date: 2024/10/20
    Author: MaxwellWang
    Describe: 
    Program:

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    */

#include "general.h"

// Use variables for ports and pins, so that they can be changed
stm32_gpio_t *platform_swdio_port = SWDIO_PORT_DEFAULT;
int platform_swdio_pin = SWDIO_PIN_DEFAULT;
stm32_gpio_t *platform_swclk_port = SWCLK_PORT_DEFAULT;
int platform_swclk_pin = SWCLK_PIN_DEFAULT;

void platform_delay(uint32_t ms) {
	chThdSleepMilliseconds(ms);
}

uint32_t platform_time_ms(void) {
	return ST2MS(chVTGetSystemTimeX());
}

void platform_srst_set_val(bool assert) {
	(void)assert;
}

bool platform_srst_get_val(void) {
	return false;
}
