/*
    Date: 2024/10/20
    Author: MaxwellWang
    Describe: 
    Program:

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    */

#ifndef EVENTS_H_
#define EVENTS_H_

#include <stdbool.h>
#include <stdint.h>

void events_init(void);
void events_add(const char *name, float param);

#endif /* EVENTS_H_ */
