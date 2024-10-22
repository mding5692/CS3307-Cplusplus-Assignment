/* Author: Linsheng Ding, 250757782
 * Description: NetworkInterface class implementation, 
 * Used to store network interface details
 * Date: Oct. 1, 2018
 */
 
#include "NetworkInterface.h"

using namespace std;

/* Constructor for NetworkInterface class
 * Grabs and stores attributes for network interface name and MAC address
 * Takes two parameters: one for network interface name and the other for MAC address
 */
NetworkInterface::NetworkInterface(string networkName, string address) {
	name = networkName;
	macAddress = address;
}

/* Destructor function for NetworkInterface class
 */
NetworkInterface::~NetworkInterface() {
	
}

 /* to_string()
 * Prints and returns attributes in NetworkInteface
* No parameters but returns strings of either the network interface details or an empty string if couldnt grab
*/
string NetworkInterface::to_string() {
	string resultStr = "Name: " + name + "\nMac address: " + macAddress + "\n";
	return resultStr;
}

/* getName()
 * getter method for network interface name
* No parameters but returns a string of either the name or an empty string if couldnt grab
*/
string NetworkInterface::getName() {
	return name;
}

/* getMACAddress()
 * getter method for network interface MAC address
* No parameters but returns a string of either the address or an empty string if couldnt grab
*/
string NetworkInterface::getMACAddress() {
	return macAddress;
}
