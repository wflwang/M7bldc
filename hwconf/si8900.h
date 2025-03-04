/*
    Date: 2024/10/20
    Author: MaxwellWang
    Describe: 
    Program:

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef SI8900_H_
#define SI8900_H_

#include "ch.h"
#include "hal.h"

// Functions
void si8900_init(void);
float si8900_get_voltage(int channel);
float si8900_get_val_rel(int channel);

// Commands
#define SI8900_CNFG_0			0xC0
#define SI8900_CNFG_0_PGA		(1 << 0)
#define SI8900_CNFG_0_MODE		(1 << 1)
#define SI8900_CNFG_0_VREF		(1 << 3)
#define SI8900_CNFG_0_MX0		(1 << 4)
#define SI8900_CNFG_0_MX1		(1 << 5)

#endif /* SI8900_H_ */
