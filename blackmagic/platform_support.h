/*
    Date: 2024/10/20
    Author: MaxwellWang
    Describe: 
    Program:

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __PLATFORM_SUPPORT_H
#define __PLATFORM_SUPPORT_H

#ifndef __GENERAL_H
#	error "Include 'general.h' instead"
#endif

#if defined(LIBFTDI)
void platform_init(int argc, char **argv);
#else
void platform_init(void);
#endif

typedef struct platform_timeout platform_timeout;
void platform_timeout_set(platform_timeout *t, uint32_t ms);
bool platform_timeout_is_expired(platform_timeout *t);
void platform_delay(uint32_t ms);

const char *platform_target_voltage(void);
int platform_hwversion(void);
void platform_srst_set_val(bool assert);
bool platform_srst_get_val(void);
bool platform_target_get_power(void);
void platform_target_set_power(bool power);
void platform_request_boot(void);

#endif

