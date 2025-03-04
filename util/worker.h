/*
    Date: 2024/10/20
    Author: MaxwellWang
    Describe: 
    Program:

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    */

#ifndef WORKER_H_
#define WORKER_H_

// Functions
void worker_execute(void(*func)(void *arg), void *arg);
void worker_wait(void);

#endif /* WORKER_H_ */
