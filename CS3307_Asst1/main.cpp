//
//  main.cpp
//  CS3307_Personal_Asst
//
//  Created by Michael Ding on 2018-09-28.
//  Copyright © 2018 MDing. All rights reserved.
//

#include <iostream>
#include <string>
#include <fstream>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/utsname.h>
#include <sys/sysinfo.h>
#include <dirent.h>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
	ifstream processorInfo("/proc/cpuinfo");
    string line = string();
	
    // 1)
    /* https://stackoverflow.com/questions/504810/how-do-i-find-the-current-machines-full-hostname-in-c-hostname-and-domain-info */
    char hostname[1024];
    hostname[1023] = '\0';
    gethostname(hostname, 1023);
    printf("Hostname: %s\n", hostname);
    
    // 2)
    /* https://stackoverflow.com/questions/3596310/c-how-to-use-the-function-uname */
    /* operating system name, release, version and machine data that can be obtained through the uname() function.  This should also include the system's uptime 
     * https://www.informit.com/articles/article.aspx?p=23618&seqNum=15 */
    struct utsname systemInfo;
    struct sysinfo systemInfoTime;
    sysinfo(&systemInfoTime);
    uname(&systemInfo);
    
    printf("system name = %s\n", systemInfo.sysname);
    printf("node name   = %s\n", systemInfo.nodename);
    printf("release     = %s\n", systemInfo.release);
    printf("version     = %s\n", systemInfo.version);
    printf("machine     = %s\n", systemInfo.machine);
    printf("uptime = %ld \n", systemInfoTime.uptime);
    
    // 3) www.cplusplus.com/forum/unices/6544
    while (!processorInfo.eof()) {
		getline(processorInfo, line);
		if (line.find("model") != string::npos) {
			printf("%s \n", line.c_str());
		} else if (line.find("vendor") != string::npos) {
			printf("%s \n", line.c_str());
		} else if (line.find("MHz") != string::npos) {
			printf("%s \n", line.c_str());
		}
	}
	
	printf("Load avg 1: %lu \n", systemInfoTime.loads[0]);
	printf("Load avg 2: %lu \n", systemInfoTime.loads[1]);
	printf("Load avg 3: %lu \n", systemInfoTime.loads[2]);
    
    // 4) http://man7.org/linux/man-pages/man2/sysinfo.2.html
    
    printf("Total Memory = %ld \n", systemInfoTime.totalram);
    printf("Free Memory = %ld \n", systemInfoTime.freeram);
    
    // 5) https://www.dreamincode.net/forums/topic/59943-accessing-directories-in-cc-part-i
    DIR *dirPointer = NULL;
    struct dirent *entryPointer = NULL;
    const string dirName = "/sys/class/net/";
    dirPointer = opendir(dirName.c_str());
    if (dirPointer == NULL) {
		printf("ERROR: Can not open %s \n", dirName.c_str());
		exit(0);
	}
	
	vector<string> networkList;
	vector<string> addrList;
	
	while ((entryPointer = readdir(dirPointer))) {
		if (entryPointer == NULL) {
			printf("ERROR: Can not read %s \n", dirName.c_str());
			exit(0);
		}
		string networkName = string(entryPointer->d_name);
		
		if ((networkName.compare(".") == 0) || (networkName.compare("..") == 0)) continue;
		networkList.push_back(networkName);
		printf("Directory name: %s \n", entryPointer->d_name);
	}
    
    closedir(dirPointer);
    
    const string address = "/address";
    for (unsigned i = 0; i < networkList.size(); i++) {
		const string networkAddrFileName = dirName + networkList[i] + address;
		printf("%s \n", networkAddrFileName.c_str());
	}
    
    // 6 
    
    return 0;
}
