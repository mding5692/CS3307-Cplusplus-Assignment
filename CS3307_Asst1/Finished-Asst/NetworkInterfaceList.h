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
#include <fstream>
#include <algorithm>
#include <dirent.h>
#include "NetworkInterface.cpp"

class NetworkInterfaceList {
	public:
		NetworkInterfaceList();
		~NetworkInterfaceList();
		std::string to_string();
		std::vector<NetworkInterface> getListOfNetworkInterfaces();
	private:
		std::vector<NetworkInterface> networkInterfaceList;
};

#endif
