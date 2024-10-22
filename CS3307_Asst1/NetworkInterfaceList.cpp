/* Author: Linsheng Ding, 250757782
 * Description: NetworkInterfaceList class implementation file, used to store network interface objects
 * Date: Oct. 1, 2018
 */

#include "NetworkInterfaceList.h"

using namespace std;

// Constant names used for referencing network files
const string DIR_NAME = "/sys/class/net/";
const string ADDR_PATH = "/address";

/* NetworkInterfaceList class constructor
 * Grabs network interfaces and stores them into a vector of NetworkInterface objects 
 */
NetworkInterfaceList::NetworkInterfaceList() {	
	// Setting up the variables
	DIR *dirPointer = NULL;
    struct dirent *entryPointer = NULL;
    // Open directory
    dirPointer = opendir(DIR_NAME.c_str());
    // Error handling, in case can't open directory
    if (dirPointer == NULL) {
		cout << "ERROR: Can not open directory" << endl;
		exit(0);
	}
	
	vector<string> networkList;
	// Error handling, in case can't read directory
	while ((entryPointer = readdir(dirPointer))) {
		if (entryPointer == NULL) {
			cout << "ERROR: Can not read directory" << endl;
			exit(0);
		}
		string networkName = string(entryPointer->d_name);
		// Grabs and stores networkName in the networkList string vector for later use
		// and removes the current and parent directory reference
		if ((networkName.compare(".") == 0) || (networkName.compare("..") == 0)) continue;
		
		// Doesnt add to vector of network names if its a network name
		// thats already been added
		if (find(networkList.begin(), networkList.end(), networkName) != networkList.end()) continue;
		networkList.push_back(networkName);
	}
    // Closes directory when done
    closedir(dirPointer);
    
    // Iterates through the list of network names
    for (unsigned i = 0; i < networkList.size(); i++) {
		// Creates the file name that has the MAC address information
		string networkAddrFileName = DIR_NAME + networkList[i] + ADDR_PATH;
		
		// Access that file and reads the line with MAC Address
		ifstream networkFile(networkAddrFileName.c_str());
		string line = string();
		
		getline(networkFile, line);
			
		// Stores network interface name + MAC address in a Network Interface object
		// and adds to networkInterfaceList vector attribute
		NetworkInterface networkInter(networkList[i], line);
		networkInterfaceList.push_back(networkInter);
	}
	
}

/* Destructor function for NetworkInterfaceList class
 */
NetworkInterfaceList::~NetworkInterfaceList() {
	networkInterfaceList.clear();
}

 /* to_string()
 * Prints and returns all network interfaces in NetworkIntefaceList
* No parameters but returns strings of either all the network interfaces or an empty string if couldnt grab
*/
string NetworkInterfaceList::to_string() {
	string resultStr = string();
	for (unsigned i = 0; i < networkInterfaceList.size(); i++) {
		string networkDetails = networkInterfaceList[i].to_string();
		resultStr += networkDetails;
	}
	return resultStr;
}

/* getListOfNetworkInterfaces()
* Getter method for the vector of NetworkInterface objects for usage 
* and take no parameters
*/
vector<NetworkInterface> NetworkInterfaceList::getListOfNetworkInterfaces() {
	return networkInterfaceList;
}

