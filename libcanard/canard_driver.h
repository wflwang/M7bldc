/*
    Date: 2024/10/20
    Author: MaxwellWang
    Describe: 
    Program:

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    */

#ifndef LIBCANARD_CANARD_DRIVER_H_
#define LIBCANARD_CANARD_DRIVER_H_

#include "ch.h"
#include "hal.h"

typedef struct {
	float age;
	float value;
} uavcan_cmd_info;

void canard_driver_init(void);
uavcan_cmd_info canard_driver_last_rawcmd(int can_if);
uavcan_cmd_info canard_driver_last_rpmcmd(int can_if);

#endif /* LIBCANARD_CANARD_DRIVER_H_ */
