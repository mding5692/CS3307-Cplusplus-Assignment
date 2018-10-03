/* Author: Linsheng Ding, 250757782
 * Description: Utilities class, used for accessing 
 * each of the utilities with their to_string() function
 * Date: Oct. 1, 2018
 */
 
#include "Utilities.cpp"
 
// Below are functions that are called before their declaration
void chooseNetworkInterfaceOptions();
void chooseProcessesOptions();

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
			chooseNetworkInterfaceOptions();
			cout << "\n" << endl;
			waitForInput();
			break;
		case '6':
			cout << "\nChecking out processes... \n" << endl;
			chooseProcessesOptions();
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
 
 /* showNetworkInterfaceOptions() function
  * Prints the options to do with Network Interfaces
  */
 void showNetworkInterfaceOptions() {
	 cout << "\nSelect a number corresponding to below options:" << endl;
	 cout << "1. Show all the network interface names" << endl;
	 cout << "2. Show network interface based on a name" << endl;
	 cout << "3. Show network interface based on MAC Address" << endl;
	 cout << "4. Show all info to do with Network Interfaces" << endl;
	 cout << "5. Go back" << endl;
 }
 
 /* chooseNetworkInterfaceOptions()
  * Waits for input from user for choosing an option to do with 
  * network interfaces
  */
void chooseNetworkInterfaceOptions() {
	showNetworkInterfaceOptions();
	
	// Takes input
	 char choice;
	 cin >> choice;
	 
	 // Chooses to loop and print result depending on option
	 switch(choice) {
		 case '1':
			cout << "\n" << endl;
			chooseNetworkInterfaceOptions();
			break;
		 case '2':
			cout << "\n" << endl;
			chooseNetworkInterfaceOptions();
			break;
		 case '3':
			cout << "\n" << endl;
			chooseNetworkInterfaceOptions();
			break;
		 case '4':
			cout << "\n" << endl;
			printNetworkInterfaceList();
			chooseNetworkInterfaceOptions();
			break;;
		 case '5':
			cout << "\nHeading back \n" << endl;
			break;
		 default: 
			cout << "\nTry again. \n" << endl;
			chooseNetworkInterfaceOptions();
			break;
	 }
}

 /* showProcessesOptions() function
  * Prints the options to do with Processes
  */
 void showProcessesOptions() {
	 cout << "\nSelect a number corresponding to below options:" << endl;
	 cout << "1. Show all the process ids" << endl;
	 cout << "2. Shows process info given a process id" << endl;
	 cout << "3. Show all info to do with processes" << endl;
	 cout << "4. Go back" << endl;
 }

/* chooseProcessesOptions() function
 * Shows and waits for input for what to do processes
 */
void chooseProcessesOptions() {
	showProcessesOptions();
	
		// Takes input
	 char choice;
	 cin >> choice;
	 
	 // Chooses to loop and print result depending on option
	 switch(choice) {
		 case '1':
			cout << "\n" << endl;
			chooseProcessesOptions();
			break;
		 case '2':
			cout << "\n" << endl;
			chooseProcessesOptions();
			break;
		 case '3':
			cout << "\n" << endl;
			printProcessList();
			chooseProcessesOptions();
			break;
		 case '4':
			cout << "\nHeading back \n" << endl;
			break;
		 default: 
			cout << "\nTry again. \n" << endl;
			chooseProcessesOptions();
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
