/* Author: Linsheng Ding, 250757782
 * Description: OperatingSystemDetails Utility implementation, 
 * used for accessing each of the utilities with 
 * their to_string() function
 * Date: Oct. 1, 2018
 */
 
#include "OperatingSystemDetails.h"
#include "OperatingSystemDetails.cpp"

/* Utility function printOSDetails()
 * Prints out OS details using to_string()
 */
void printOSDetails() {
	OperatingSystemDetails osDetails;
	cout << osDetails.to_string() << endl;
}

/* Main function to run printOSDetails()
 */ 
int main() {
	printOSDetails();
	return 0;
}
