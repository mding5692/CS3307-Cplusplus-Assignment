/* Author: Linsheng Ding, 250757782
 * Description: NetworkInterface class header file, used to store network interface details
 * Date: Oct. 1, 2018
 */

#ifndef NETWORKINTERFACE_H
#define NETWORKINTERFACE_H
 
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>

class NetworkInterface {
	public:
		NetworkInterface(std::string networkName, std::string address);
		std::string to_string();
		std::string getName();
		std::string getMACAddress();
	private:
		std::string name;
		std::string macAddress;
};

#endif
