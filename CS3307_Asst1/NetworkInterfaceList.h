/* Author: Linsheng Ding, 250757782
 * Description: NetworkInterfaceList class header file, used to store network interface objects
 * Date: Oct. 1, 2018
 */

#ifndef NETWORK_INTERFACE_LIST_H
#define NETWORK_INTERFACE_LIST_H

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <dirent.h>
#include "NetworkInterface.h"

class NetworkInterfaceList {
	public:
		NetworkInterfaceList();
		std::string to_string();
		std::string getNetworkAddressFor(std::string networkName);
		std::string getNetworkNameFor(std::string networkAddress);
		std::vector<NetworkInterface> getListOfNetworkInterfaces();
	private:
		std::vector<NetworkInterface> networkInterfaceList;
};

#endif
