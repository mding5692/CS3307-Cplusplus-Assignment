/* Author: Linsheng Ding, 250757782
 * Description: ProcessList class implementation file, 
 * Used to store Process objects
 * Date: Oct. 1, 2018
 */

#include "ProcessList.h"
 
using namespace std;
 
// CONSTANTS
const string PROC_DIR_NAME = "/proc/";
const string PROC_STATUS_PATH = "/status";
 
 /* ProcessList constructor 
  * Used to grab and store process data in a list of Process objects
  */
ProcessList::ProcessList() {
	// Setting up the variables
	DIR *dirPtr = NULL;
    struct dirent *entryPtr = NULL;
        
    // Open directory
    dirPtr = opendir(PROC_DIR_NAME.c_str());
     
    // Error handling, in case can't open directory
    if (dirPtr == NULL) {
		printf("ERROR: Can not open %s \n", PROC_DIR_NAME.c_str());
		exit(0);
	}
	
	vector<string> processNameList;
	// Error handling, in case can't read directory
	while ((entryPtr = readdir(dirPtr))) {
		if (entryPtr == NULL) {
			printf("ERROR: Can not read %s \n", PROC_DIR_NAME.c_str());
			exit(0);
		}
		string processDirName = string(entryPtr->d_name);
		// Grabs and stores process name in the processNameList string vector for later use
		// and removes the current and parent directory reference
		if ((processDirName.compare(".") == 0) || (processDirName.compare("..") == 0)) continue;
		
		// Also checks if its actually a process directory name by checkin
		// if directory name has anything else than numeric digits
		if (processDirName.find_first_not_of("0123456789") != string::npos) continue;
		
		processNameList.push_back(processDirName);
		printf("Accessing process %s directory\n", entryPtr->d_name);
	}
	
	// Closes directory when done
    closedir(dirPtr);
    
        // Iterates through the list of network names
    for (unsigned i = 0; i < processNameList.size(); i++) {
		// Creates the file name that has the process information
		string procFilePath = PROC_DIR_NAME + processNameList[i] + PROC_STATUS_PATH;
		printf("Accessing process file: %s \n", procFilePath.c_str());
		
		// Accesses that file
		ifstream processFile(procFilePath.c_str());
		string line = string();
		
		// Sets variables for saving process data
		string pid = string();
		string pname = string();
		string ownerid = string(); 
		string ppid = string();
		string pstate = string();
		
		while (!processFile.eof()) {
			getline(processFile, line);
			
			if (line.find("Pid:") != string::npos) {
				pid = line;
			} else if (line.find("State:") != string::npos) {
				pstate = line;
			} else if (line.find("PPid:") != string::npos) {
				ppid = line;
			} else if (line.find("Uid:") != string::npos) {
				ownerid = line;
			} else if (line.find("Name:") != string::npos) {
				pname = line;
			}
			
		}
		
		// Store process data in Process objects and adds to 
		// vector of Process objects
		Process process(pid, pname, ownerid, ppid, pstate);
		processList.push_back(process);
	}
}

/* to_string() function
 * Used to print and return out a string of all attributes 
 * like all the processes inside this list, takes no parameters
 */
 string ProcessList::to_string() {
	 string returnStr = string();
	 for (unsigned i = 0; i < processList.size(); i++) {
		 string processDetails = processList[i].to_string();
		 returnStr += processDetails;
	 }
	 return returnStr;
 }
 
 /* getProcessByID() function
  * Returns a Process object with the same id as the parameter
  */
 Process ProcessList::getProcessByID(string pid) {
	Process process;
	for (unsigned i = 0; i < processList.size(); i++) {
		 if (processList[i].getProcessID() == pid) {
			 process = processList[i];
		 }
	 }
	return process;
  }

/* getProcessList() function
 * Getter method for the processList attribute, contains Process objects
 */
vector<Process> ProcessList::getProcessList() {
	return processList;
}
