/*
    Date: 2024/10/20
    Author: MaxwellWang
    Describe: 
    Program:

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "vesc_c_if.h"

HEADER

static lbm_value ext_test(lbm_value *args, lbm_uint argn) {
	if (argn != 1 || !VESC_IF->lbm_is_number(args[0])) {
		return VESC_IF->lbm_enc_sym_eerror;
	}
	
	return VESC_IF->lbm_enc_i(VESC_IF->lbm_dec_as_i32(args[0]) * 3);
}

INIT_FUN(lib_info *info) {
	INIT_START

	(void)info;
	VESC_IF->lbm_add_extension("ext-test", ext_test);	
	return true;
}

