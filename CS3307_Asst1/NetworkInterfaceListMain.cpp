/* Author: Linsheng Ding, 250757782
 * Description: NetworkInterfaceList Utility implementation, 
 * used for accessing each of the utilities with 
 * their to_string() function
 * Date: Oct. 1, 2018
 */
 
#include "NetworkInterfaceList.h"
#include "NetworkInterfaceList.cpp"

/* Utility function printNetworkInterfaceList()
 * Prints out network interfaces using to_string()
 */
void printNetworkInterfaceList() {
	NetworkInterfaceList nList;
	cout << nList.to_string() << endl;
}

/* Main function to run printNetworkInterfaceList()
 */ 
int main() {
	printNetworkInterfaceList();
	return 0;
}
