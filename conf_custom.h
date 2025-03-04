/*
    Date: 2024/10/20
    Author: MaxwellWang
    Describe: 
    Program:

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef CONF_CUSTOM_H_
#define CONF_CUSTOM_H_

#include <stdint.h>
#include <stdbool.h>

// Functions
void conf_custom_add_config(
		int (*get_cfg)(uint8_t *data, bool is_default),
		bool (*set_cfg)(uint8_t *data),
		int (*get_cfg_xml)(uint8_t **data));
void conf_custom_clear_configs(void);
int conf_custom_cfg_num(void);
int conf_custom_get_cfg_xml(int conf_ind, uint8_t **data);
void conf_custom_process_cmd(unsigned char *data, unsigned int len,
		void(*reply_func)(unsigned char *data, unsigned int len));

#endif /* CONF_CUSTOM_H_ */
