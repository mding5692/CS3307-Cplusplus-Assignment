/* Author: Linsheng Ding, 250757782
 * Description: MemoryInfo Utility implementation, used for accessing 
 * each of the utilities with their to_string() function
 * Date: Oct. 1, 2018
 */
 
#include "MemoryInfo.h"
#include "MemoryInfo.cpp"

/* Utility function printMemoryInfo()
 * Prints out memory information using to_string()
 */
void printMemoryInfo() {
	MemoryInfo memoryInfo;
	cout << memoryInfo.to_string() << endl;
}

/* Main function to run printMemoryInfo()
 */ 
int main() {
	printMemoryInfo();
	return 0;
}
