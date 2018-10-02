/* Author: Linsheng Ding, 250757782
 * Description: Process class header file, used to store process data
 * Date: Oct. 1, 2018
 */

#ifndef PROCESS_H
#define PROCESS_H

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <dirent.h>

class Process {
	public:
		Process(std::string pid, std::string name, std::string ownerid, std::string ppid, std::string pstate);
		std::string to_string();
		std::string getProcessID();
		std::string getProcessName();
		std::string getOwnerID();
		std::string getParentProcessID();
		std::string getState();
	private:
		std::string processID;
		std::string processName;
		std::string ownerID;
		std::string parentProcessID;
		std::string state;
};

#endif
