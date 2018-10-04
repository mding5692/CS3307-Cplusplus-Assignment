/* Author: Linsheng Ding, 250757782
 * Description: HostName Utility implementation, used for accessing 
 * each of the utilities with their to_string() function
 * Date: Oct. 1, 2018
 */
 
#include "HostName.h"
#include "HostName.cpp"

/* Utility function printHostName()
 * Prints out the host name using to_string()
 */
void printHostName() {
	HostName hostname;
	cout << "HostName: " + hostname.to_string() + "\n" << endl;
}

/* Main function to run printHostName()
 */ 
int main() {
	printHostName();
	return 0;
}
	
