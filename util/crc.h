/*
    Date: 2024/10/20
    Author: MaxwellWang
    Describe: 
    Program:

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    */

#ifndef CRC_H_
#define CRC_H_

#include <stdint.h>

/*
 * Functions
 */
unsigned short crc16(unsigned char *buf, unsigned int len);
uint32_t crc32(uint32_t *buf, uint32_t len);
void crc32_reset(void);
uint32_t crc32_with_init(const uint8_t *buf, uint32_t len, uint32_t cksum);

#endif /* CRC_H_ */
