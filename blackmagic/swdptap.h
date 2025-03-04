/*
    Date: 2024/10/20
    Author: MaxwellWang
    Describe: 
    Program:

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __SWDPTAP_H
#define __SWDPTAP_H

#include <stdint.h>
#include <stdbool.h>

int swdptap_init(void);

/* Primitive functions */
bool swdptap_bit_in(void);
void swdptap_bit_out(bool val);

/* High level functions, provided as weak in swdptap_generic.c */
uint32_t swdptap_seq_in(int ticks);
bool swdptap_seq_in_parity(uint32_t *data, int ticks);
void swdptap_seq_out(uint32_t MS, int ticks);
void swdptap_seq_out_parity(uint32_t MS, int ticks);

#endif

