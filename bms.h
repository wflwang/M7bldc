/*
    Date: 2024/10/20
    Author: MaxwellWang
    Describe: 
    Program:

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    */

#ifndef BMS_H_
#define BMS_H_

#include "ch.h"
#include "hal.h"
#include "datatypes.h"

// Functions
void bms_init(bms_config *conf);
bool bms_process_can_frame(uint32_t can_id, uint8_t *data8, int len, bool is_ext);
void bms_update_limits(float *i_in_min, float *i_in_max,
		float i_in_min_conf, float i_in_max_conf);
void bms_process_cmd(unsigned char *data, unsigned int len,
		void(*reply_func)(unsigned char *data, unsigned int len));
volatile bms_values *bms_get_values(void);
void bms_send_status_can(void);

#endif /* BMS_H_ */
