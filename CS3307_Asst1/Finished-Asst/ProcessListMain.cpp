/* Author: Linsheng Ding, 250757782
 * Description: ProcessList Utility implementation, used for accessing 
 * each of the utilities with their to_string() function
 * Date: Oct. 1, 2018
 */
 
#include "ProcessList.h"
#include "ProcessList.cpp"

/* Utility function printProcessList()
 * Prints out list of processes using to_string()
 */
void printProcessList() {
	ProcessList pList;
	cout << pList.to_string() << endl;
}

/* Main function to run printProcessList()
 */ 
int main() {
	printProcessList();
	return 0;
}
