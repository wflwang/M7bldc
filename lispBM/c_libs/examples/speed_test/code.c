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

static int dec_cnt(volatile int x) {
	if (x == 0) {
		return 0;
	} else {
		return dec_cnt(x - 1);
	}
}

static lbm_value ext_dec_cnt(lbm_value *args, lbm_uint argn) {
	if (argn != 1 || !VESC_IF->lbm_is_number(args[0])) {
		return VESC_IF->lbm_enc_sym_eerror;
	}
	
	float t0 = VESC_IF->system_time();
	dec_cnt(VESC_IF->lbm_dec_as_i32(args[0]));
	float t1 = VESC_IF->system_time();
	
	return VESC_IF->lbm_enc_float(t1 - t0);
}

static int tak(volatile int x, volatile int y, volatile int z) {
	if (y >= x) {
		return z;
	} else {
		return tak(
				tak(x - 1, y, z),
				tak(y - 1, z, x),
				tak(z - 1, x, y));
	}
}

static lbm_value ext_tak(lbm_value *args, lbm_uint argn) {
	if (argn != 3 ||
		!VESC_IF->lbm_is_number(args[0]) ||
		!VESC_IF->lbm_is_number(args[1]) ||
		!VESC_IF->lbm_is_number(args[2])) {
		return VESC_IF->lbm_enc_sym_eerror;
	}
	
	float t0 = VESC_IF->system_time();
	int res = tak(VESC_IF->lbm_dec_as_i32(args[0]),
				VESC_IF->lbm_dec_as_i32(args[1]),
				VESC_IF->lbm_dec_as_i32(args[2]));
	float t1 = VESC_IF->system_time();
	
	VESC_IF->printf("C TakRes: %d", res);
	
	return VESC_IF->lbm_enc_float(t1 - t0);
}

INIT_FUN(lib_info *info) {
	INIT_START

	(void)info;
	VESC_IF->lbm_add_extension("ext-dec-cnt", ext_dec_cnt);
	VESC_IF->lbm_add_extension("ext-tak", ext_tak);	
	return true;
}

