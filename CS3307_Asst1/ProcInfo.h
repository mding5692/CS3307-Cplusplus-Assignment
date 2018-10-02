/* Author: Linsheng Ding, 250757782
 * Description: ProcInfo class header file, 
 * Gets processor details and system load
 * Date: Oct. 1, 2018
 */
 
#ifndef PROC_INFO_H
#define PROC_INFO_H

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>

class ProcInfo {
	public:
		ProcInfo();
		std::string to_string();
		std::string getVendor();
		std::string getModelName();
		std::string getClockSpeed();
		std::string getSystemLoad();
	private:
		std::string vendor;
		std::string modelName;
		std::string clockSpeed;
		std::string oneMinLoad;
		std::string fiveMinLoad;
		std::string fifteenMinLoad;
};

#endif
