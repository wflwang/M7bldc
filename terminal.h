/*
    Date: 2024/10/20
    Author: MaxwellWang
    Describe: 
    Program:

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    */

#ifndef TERMINAL_H_
#define TERMINAL_H_

#include "datatypes.h"

// Functions
void terminal_process_string(char *str);
void terminal_add_fault_data(fault_data *data);
mc_fault_code terminal_get_first_fault(void);
void terminal_register_command_callback(
		const char* command,
		const char *help,
		const char *arg_names,
		void(*cbf)(int argc, const char **argv));
void terminal_unregister_callback(void(*cbf)(int argc, const char **argv));

#endif /* TERMINAL_H_ */
