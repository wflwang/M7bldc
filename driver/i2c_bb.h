/*
    Date: 2024/10/20
    Author: MaxwellWang
    Describe: 
    Program:

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    */

#ifndef I2C_BB_H_
#define I2C_BB_H_

#include "ch.h"
#include "hal.h"
#include "stdint.h"
#include "stdbool.h"

typedef enum {
	I2C_BB_RATE_100K = 0,
	I2C_BB_RATE_200K,
	I2C_BB_RATE_400K,
	I2C_BB_RATE_700K
} I2C_BB_RATE;

typedef struct {
	stm32_gpio_t *sda_gpio; int sda_pin;
	stm32_gpio_t *scl_gpio; int scl_pin;
	I2C_BB_RATE rate;
	bool has_started;
	bool has_error;
	mutex_t mutex;
} i2c_bb_state;

void i2c_bb_init(i2c_bb_state *s);
void i2c_bb_restore_bus(i2c_bb_state *s);
bool i2c_bb_tx_rx(i2c_bb_state *s, uint16_t addr, uint8_t *txbuf, size_t txbytes, uint8_t *rxbuf, size_t rxbytes);
bool i2c_bb_write_byte(i2c_bb_state *s, bool send_start, bool send_stop, unsigned char byte);
unsigned char i2c_bb_read_byte(i2c_bb_state *s, bool nack, bool send_stop);

#endif /* I2C_BB_H_ */
