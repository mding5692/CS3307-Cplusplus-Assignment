/* Author: Linsheng Ding, 250757782
 * Description: MemoryInfo class header file, 
 * Gets and stores memory details
 * Date: Oct. 1, 2018
 */
 
#ifndef MEMORY_INFO_H
#define MEMORY_INFO_H
 
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <sys/sysinfo.h>

class MemoryInfo {
	public:
		MemoryInfo();
		~MemoryInfo();
		std::string to_string();
		long getTotalRam();
		long getFreeRam();
	private:
		long totalRam;
		long freeRam;
};

#endif
