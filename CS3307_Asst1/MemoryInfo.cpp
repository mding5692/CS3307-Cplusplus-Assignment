/* Author: Linsheng Ding, 250757782
 * Description: MemoryInfo class implementation, gets memory details
 * Date: Oct. 1, 2018
 */
 
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <sys/sysinfo.h>
#include "MemoryInfo.h"

using namespace std;

/* Constructor for MemoryInfo class
 * Grabs attributes for storing memory information using sysInfo()
 */
MemoryInfo::MemoryInfo() {
	struct sysinfo systemInfo;
    sysinfo(&systemInfo);
    totalRam = systemInfo.totalram;
    freeRam = systemInfo.freeram;
}

/* getTotalRam()
 * getter method for total ram
* No parameters but returns a long int of the total ram 
*/
long int MemoryInfo::getTotalRam() {
	return totalRam;
}

/* getFreeRam()
 * getter method for free ram
* No parameters but returns a long int of the free ram 
*/
long int MemoryInfo::getFreeRam() {
	return freeRam;
}

 /* to_string()
 * Prints and returns attributes in MemoryInfo class
* No parameters but returns strings of either the memory details or an empty string if couldnt grab
*/
 string MemoryInfo::to_string() {
	 string resultString = "Total ram: " + std::to_string(totalRam) + "\nFree ram: " + std::to_string(freeRam) + "\n";
	 printf(resultString.c_str());
	 return resultString;
 }

int main() {
	MemoryInfo mInfo;
	mInfo.to_string();
}

