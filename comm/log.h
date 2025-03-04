/*
    Date: 2024/10/20
    Author: MaxwellWang
    Describe: 
    Program:

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    */

#ifndef COMM_LOG_H_
#define COMM_LOG_H_

#include <stdint.h>
#include <stdbool.h>

// Functions
void log_start(
		int can_id,
		int field_num,
		float rate_hz,
		bool append_time,
		bool append_gnss,
		bool append_gnss_time);
void log_stop(int can_id);
void log_config_field(
		int can_id,
		int field_ind,
		char *key,
		char *name,
		char *unit,
		int precision,
		bool is_relative,
		bool is_timestamp);
void log_send_samples_f32(
		int can_id,
		int field_start,
		float *samples,
		int sample_num);

#endif /* COMM_LOG_H_ */
