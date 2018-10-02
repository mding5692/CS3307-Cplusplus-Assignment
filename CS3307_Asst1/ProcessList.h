/* Author: Linsheng Ding, 250757782
 * Description: ProcessList class header file, used to store Process objects
 * Date: Oct. 1, 2018
 */
 
#ifndef PROCESS_LIST_H
#define PROCESS_LIST_H

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <dirent.h>
#include "Process.cpp"

class ProcessList {
	public:
		ProcessList();
		std::string to_string();
		Process getProcessByID(std::string pid);
		std::vector<Process> getProcessList(); 
	private:
		std::vector<Process> processList;
};

#endif
