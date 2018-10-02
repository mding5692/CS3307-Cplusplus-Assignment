/* Author: Linsheng Ding, 250757782
 * Description: Utilities class, used for accessing 
 * each of the utilities with their to_string() function
 * Date: Oct. 1, 2018
 */
 
 #include "Utilities.cpp"
 
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
	 
	 char choice;
	 cin >> choice;
	 
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

int main() {
	waitForInput();
	return 0;
}
