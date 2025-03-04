/*
    Date: 2024/10/20
    Author: MaxwellWang
    Describe: 
    Program:

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    */

#ifndef COMM_USB_H_
#define COMM_USB_H_

#include "conf_general.h"

// Functions
void comm_usb_init(void);
void comm_usb_send_packet(unsigned char *data, unsigned int len);
unsigned int comm_usb_get_write_timeout_cnt(void);

#endif /* COMM_USB_H_ */
