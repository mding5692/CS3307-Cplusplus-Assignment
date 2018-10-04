/* Author: Linsheng Ding, 250757782
 * Description: ProcInfo Utility implementation, used for accessing 
 * each of the utilities with their to_string() function
 * Date: Oct. 1, 2018
 */
 
#include "ProcInfo.h"
#include "ProcInfo.cpp"

/* Utility function printProcInfo()
 * Prints out the processor info using to_string()
 */
void printProcInfo() {
	ProcInfo procInfo;
	cout << procInfo.to_string() << endl;
}

/* Main function to run printProcInfo()
 */ 
int main() {
	printProcInfo();
	return 0;
}

