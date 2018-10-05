/* Author: Linsheng Ding, 250757782
 * Description: OperatingSystemDetails class header file, 
 * Gets OS name, release, version, machine data and system uptime
 * Date: Oct. 1, 2018
 */

#ifndef OS_DETAILS_H
#define OS_DETAILS_H

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <sys/utsname.h>
#include <sys/sysinfo.h>

class OperatingSystemDetails {
	public:
		OperatingSystemDetails();
		~OperatingSystemDetails();
		std::string to_string();
		std::string getSysName();
		std::string getRelease();
		std::string getVersion();
		std::string getMachine();
		std::string getUpTime();
	private:
		std::string sysName;
		std::string release;
		std::string version;
		std::string machine;
		std::string uptime;
};

#endif
