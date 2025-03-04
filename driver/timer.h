/*
    Date: 2024/10/20
    Author: MaxwellWang
    Describe: 
    Program:

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    */

#ifndef TIMER_H_
#define TIMER_H_

#include <stdint.h>

void timer_init(void);
uint32_t timer_time_now(void);
float timer_seconds_elapsed_since(uint32_t time);
void timer_sleep(float seconds);

#endif /* TIMER_H_ */
