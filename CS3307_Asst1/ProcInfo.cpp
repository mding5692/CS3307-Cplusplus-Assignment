/* Author: Linsheng Ding, 250757782
 * Description: ProcInfo class implementation, 
 * Gets processor details and system load
 * Date: Oct. 1, 2018
 */
 
#include "ProcInfo.h"

using namespace std;

/* Constructor for ProcInfo class
 * Grabs attributes like processor information
 */
 ProcInfo::ProcInfo() {
	ifstream processorInfo("/proc/cpuinfo");
    string line = string();
    
    struct sysinfo systemInfo;
    sysinfo(&systemInfo);
    
    while (!processorInfo.eof()) {
		getline(processorInfo, line);
		if (line.find("model name") != string::npos) {
			modelName = line;
		} else if (line.find("vendor") != string::npos) {
			vendor = line;
		} else if (line.find("MHz") != string::npos) {
			clockSpeed = line;
		}
	}
	
	oneMinLoad = std::to_string(systemInfo.loads[0]);
	fiveMinLoad = std::to_string(systemInfo.loads[1]);
	fifteenMinLoad = std::to_string(systemInfo.loads[2]);
 }
 
 /* to_string()
 * Prints and returns attributes in ProcInfo
* No parameters but returns strings of either the processor details or an empty string if couldnt grab
*/
 string ProcInfo::to_string() {
	 string resultString = vendor + "\n" + modelName + "\n" + clockSpeed + "\n1 min load: " + oneMinLoad + "\n5 min load: " + fiveMinLoad + "\n15 min load: " + fifteenMinLoad + "\n";
	 printf(resultString.c_str());
	 return resultString;
 }
 
 /* getVendor()
 * getter method for vendor
* No parameters but returns a string of either the vendor or an empty string if couldnt grab
*/
 string ProcInfo::getVendor() {
	return vendor;
 }
 
 /* getModelName()
 * getter method for model name
* No parameters but returns a string of either the model name or an empty string if couldnt grab
*/
string ProcInfo::getModelName() {
	return modelName;	
}
	
 /* getClockSpeed()
 * getter method for clock speed
* No parameters but returns a string of either the clock speed or an empty string if couldnt grab
*/	
string ProcInfo::getClockSpeed() {
	return clockSpeed;
}

 /* getSystemLoad()
 * getter method for system load avgs for 1min, 5min and 15min
* No parameters but returns a string of all the load avgs or an empty string if couldnt grab
*/
string ProcInfo::getSystemLoad() {
	string systemLoadStr = "1 min load: " + oneMinLoad + "\n5 min load: " + fiveMinLoad + "\n15 min load: " + fifteenMinLoad + "\n";
	return systemLoadStr;
}
 
 int main() {
	 ProcInfo procInfo;
	 procInfo.to_string();
	 
	 printf(procInfo.getSystemLoad().c_str());
 }
