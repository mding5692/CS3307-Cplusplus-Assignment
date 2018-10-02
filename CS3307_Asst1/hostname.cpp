/* Author: Linsheng Ding, 250757782
 * Description: HostName class implementation, 
 * used to get the host name of the OS
 * Date: Oct. 1, 2018
 */

#include "HostName.h"

using namespace std;

/* HostName()
 * HostName class constructor
 * No parameters or return value
 * Sets hostName attribute using the gethostname function
 */
HostName::HostName() {
	char hostNameCharArr[1024]; // Creates a char array to store results from gethostname()
	hostNameCharArr[1023] = '\0'; // Makes sure it has a null-terminated string
	gethostname(hostNameCharArr, 1023); // Grabs hostname and stores in char array
	hostName = string(hostNameCharArr); // Converts char array into a string
}

/* to_string()
 * Prints and returns the hostName 
* No parameters but returns a string of either the hostname or an empty string if couldnt grab
*/
string HostName::to_string() {
	cout << "Hostname: " << hostName << endl;
	return hostName;
}

/* getHostName()
 * Returns the hostName 
* No parameters but returns a string of either the hostname or an empty string if couldnt grab
*/
string HostName::getHostName() {
	return hostName;
}

// Test
int main() {
	HostName hN;
	hN.to_string();
}
