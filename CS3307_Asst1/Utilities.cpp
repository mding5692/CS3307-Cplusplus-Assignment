/* Author: Linsheng Ding, 250757782
 * Description: Utilities class, used for accessing 
 * each of the utilities with their to_string() function
 * Date: Oct. 1, 2018
 */
 
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <dirent.h>
#include "HostName.cpp"
#include "MemoryInfo.cpp"
#include "NetworkInterfaceList.cpp"
#include "OperatingSystemDetails.cpp"
#include "ProcInfo.cpp"
#include "ProcessList.cpp"

/* Utility function printHostName()
 * Prints out the host name using to_string()
 */
void printHostName() {
	HostName hostName;
	hostName.to_string();
}

/* Utility function printMemoryInfo()
 * Prints out memory information using to_string()
 */
void printMemoryInfo() {
	MemoryInfo memoryInfo;
	memoryInfo.to_string();
}

/* Utility function printProcInfo()
 * Prints out the processor info using to_string()
 */
void printProcInfo() {
	ProcInfo procInfo;
	procInfo.to_string();
}

/* Utility function printProcessList()
 * Prints out list of processes using to_string()
 */
void printProcessList() {
	ProcessList pList;
	pList.to_string();
}

/* Utility function printNetworkInterfaceList()
 * Prints out network interfaces using to_string()
 */
void printNetworkInterfaceList() {
	NetworkInterfaceList nList;
	nList.to_string();
	
}

/* Utility function printOSDetails()
 * Prints out OS details using to_string()
 */
void printOSDetails() {
	OperatingSystemDetails osDetails;
	osDetails.to_string();
}
