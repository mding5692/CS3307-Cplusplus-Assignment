/* Author: Linsheng Ding, 250757782
 * Description: MainMenu utility implementation, used for accessing 
 * each of the utilities with their to_string() function with
 * a commandline menu
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
	HostName hostname;
	cout << hostname.to_string() << endl;
}

/* Utility function printMemoryInfo()
 * Prints out memory information using to_string()
 */
void printMemoryInfo() {
	MemoryInfo memoryInfo;
	cout << memoryInfo.to_string() << endl;
}

/* Utility function printProcInfo()
 * Prints out the processor info using to_string()
 */
void printProcInfo() {
	ProcInfo procInfo;
	cout << procInfo.to_string() << endl;
}

/* Utility function printProcessList()
 * Prints out list of processes using to_string()
 */
void printProcessList() {
	ProcessList pList;
	cout << pList.to_string() << endl;
}

/* Utility function printNetworkInterfaceList()
 * Prints out network interfaces using to_string()
 */
void printNetworkInterfaceList() {
	NetworkInterfaceList nList;
	cout << nList.to_string() << endl;
}

/* Utility function printOSDetails()
 * Prints out OS details using to_string()
 */
void printOSDetails() {
	OperatingSystemDetails osDetails;
	cout << osDetails.to_string() << endl;
} 

 /* printInstructions() function
  * Prints the instructions for selecting utilities
  */
void printInstructions() {
	cout << "Welcome, choose a number corresponding to a utility:" << endl;
	cout << "1. Hostname" << endl;
	cout << "2. Operating System Information" << endl;
	cout << "3. Processor Information" << endl;
	cout << "4. Memory Information" << endl;
	cout << "5. Network Interfaces" << endl;
	cout << "6. Processes" << endl;
	cout << "7. Exit" << endl;
}

/* waitForInput() function
 * Keeps repeating instructions unless user chooses an option
 */ 
 void waitForInput() {
	 printInstructions();
	 
	 // Takes input
	 char choice;
	 cin >> choice;
	 
	 // Chooses to loop and print result depending on option
	 switch(choice) {
		 case '1':
			cout << "\nChecking out hostname... \n" << endl;
			printHostName();
			cout << "\n" << endl;
			waitForInput();
			break;
		 case '2':
			cout << "\nChecking out OS... \n" << endl;
			printOSDetails();
			cout << "\n" << endl;
			waitForInput();
			break;
		 case '3':
			cout << "\nChecking out processor... \n" << endl;
			printProcInfo();
			cout << "\n" << endl;
			waitForInput();
			break;
		 case '4':
			cout << "\nChecking out memory... \n" << endl;
			printMemoryInfo();
			cout << "\n" << endl;
			waitForInput();
			break;;
		 case '5':
			cout << "\nChecking out network interfaces... \n" << endl;
			printNetworkInterfaceList();
			cout << "\n" << endl;
			waitForInput();
			break;
		case '6':
			cout << "\nChecking out processes... \n" << endl;
			printProcessList();
			cout << "\n" << endl;
			waitForInput();
			break;
		 case '7':
			cout << "\nSee ya! \n" << endl;
			break;
		 default: 
			cout << "\nTry again. \n" << endl;
			waitForInput();
			break;
	 }
 }
 
/* Main function
 * For starting the whole menu loop
 */ 
int main() {
	waitForInput();
	return 0;
}
