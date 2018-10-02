/* Author: Linsheng Ding, 250757782
 * Description: HostName class header file, 
 * used to get the host name of the OS
 * Date: Oct. 1, 2018
 */
 
#ifndef HOSTNAME_H
#define HOSTNAME_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string>
#include <iostream>

class HostName {
	public:
		HostName();
		std::string to_string();
		std::string getHostName();
	private:
		std::string hostName;
};

#endif
