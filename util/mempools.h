/*
    Date: 2024/10/20
    Author: MaxwellWang
    Describe: 
    Program:

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    */

#ifndef MEMPOOLS_H_
#define MEMPOOLS_H_

#include "datatypes.h"

// Settings
#define MEMPOOLS_MCCONF_NUM				10
#define MEMPOOLS_APPCONF_NUM			3

// Functions
void mempools_init(void);

mc_configuration *mempools_alloc_mcconf(void);
void mempools_free_mcconf(mc_configuration *conf);

app_configuration *mempools_alloc_appconf(void);
void mempools_free_appconf(app_configuration *conf);

int mempools_mcconf_highest(void);
int mempools_appconf_highest(void);

int mempools_mcconf_allocated_num(void);
int mempools_appconf_allocated_num(void);

uint8_t *mempools_get_packet_buffer(void);
void mempools_free_packet_buffer(uint8_t *buffer);

#endif /* MEMPOOLS_H_ */
