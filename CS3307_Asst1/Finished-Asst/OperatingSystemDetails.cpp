/* Author: Linsheng Ding, 250757782
 * Description: OperatingSystemDetails class implementation, 
 * Gets OS name, release, version, machine data and system uptime
 * Date: Oct. 1, 2018
 */
 
#include "OperatingSystemDetails.h"

using namespace std;

/* Constructor function for OperatingSystemDetails class
 * Sets attributes like system name or release
 */
OperatingSystemDetails::OperatingSystemDetails() {
	// Grabs info using the system sysinfo() and uname() functions
	struct utsname systemInfo;
    struct sysinfo systemInfoTime;
    sysinfo(&systemInfoTime);
    uname(&systemInfo);
    
    // Stores them into attributes
    sysName = systemInfo.sysname;
    release = systemInfo.release;
    version = systemInfo.version;
    machine = systemInfo.machine;
    
    // Declares constants to better calculate amount of seconds in a certain time period
	const long SECONDS_IN_MIN = 60;
	const long SECONDS_IN_HOUR = 3600;
    const long SECONDS_IN_DAY = 86400;
    
    // Converts seconds into days:hrs:min:sec format using modulus
    long uptimeSeconds = systemInfoTime.uptime;
    long days = uptimeSeconds / SECONDS_IN_DAY; 
    uptimeSeconds %= SECONDS_IN_DAY;
    long hrs = uptimeSeconds / SECONDS_IN_HOUR; 
    uptimeSeconds %= SECONDS_IN_HOUR;
    long min = uptimeSeconds / SECONDS_IN_MIN; 
    uptimeSeconds %= SECONDS_IN_MIN;
    long sec = uptimeSeconds;
    
    // Stores the uptime
    uptime = std::to_string(days) + "d " + std::to_string(hrs) + "h " + std::to_string(min) + "m " + std::to_string(sec) + "s";
}

/* Destructor function for OperatingSystemDetails class
 */
OperatingSystemDetails::~OperatingSystemDetails() {
	
}


/* to_string() function prints out all the attributes in OperatingSystemDetails class
 * Also returns it as a string format
 * Does not take parameters
 */
 string OperatingSystemDetails::to_string() {    
    return "System name: " + sysName + "\n" + "Release: " + release + "\n" + "Version: " + version + "\n" + "Machine: " + machine + "\n" + "Uptime: " + uptime + "\n";
 }
 
/* getSysName()
 * Returns the sysName 
* No parameters but returns a string of either the sysName or an empty string if couldnt grab
*/ 		
string OperatingSystemDetails::getSysName() {
	return sysName;
}

/* getRelease()
 * Returns the release 
* No parameters but returns a string of either the release or an empty string if couldnt grab
*/ 			
string OperatingSystemDetails::getRelease() {
	return release;
}

/* getVersion()
 * Returns the version 
* No parameters but returns a string of either the version or an empty string if couldnt grab
*/
string OperatingSystemDetails::getVersion() {
	return version;
}
	
/* getMachine()
 * Returns the machine 
* No parameters but returns a string of either the machine or an empty string if couldnt grab
*/		
string OperatingSystemDetails::getMachine() {
	return machine;
}
	
/* getUpTime()
 * Returns the uptime 
* No parameters but returns a string of either the uptime or an empty string if couldnt grab
*/				
string OperatingSystemDetails::getUpTime() {
	return uptime;
}

