/* Author: Linsheng Ding, 250757782
 * Description: Process class implementation file, used to store process data
 * Date: Oct. 1, 2018
 */

#include "Process.h"

using namespace std;

/* Process class constructor
 * Takes in arguments which are all strings: process id, name, owner id, parent process id and state 
 */
Process::Process() {}

/* Process class constructor
 * Takes in arguments which are all strings: process id, name, owner id, parent process id and state 
 */
Process::Process(string pid, string name, string ownerid, string ppid, string pstate) {
	processID = pid;
	processName = name;
	ownerID = ownerid;
	parentProcessID = ppid;
	state = pstate;
}

/* to_string() function
 * Returns attributes as a string and also prints it out
 * Takes no parameters
 */
string Process::to_string() {
	string returnStr = processID + "\n" + processName + "\nOwner ID: " + ownerID + "\nParent ID: " + parentProcessID + "\n" + state;
	cout << returnStr << endl;
	return returnStr;
}

/* getProcessID() - getter method for processID
 */
string Process::getProcessID() {
	return processID;
}

/* getProcessName() - getter method for processName
 */
string Process::getProcessName() {
	return processName;
}

/* getOwnerID() - getter method for ownerID
 */
string Process::getOwnerID() {
	return ownerID;
}

/* getParentProcessID() - getter method for parentProcessID
 */
string Process::getParentProcessID() {
	return parentProcessID;
}

/* getState() - getter method for state
 */ 
string Process::getState() {
	return state;
}

