/* Author: Linsheng Ding, 250757782
 * Description: ProcessList class implementation file, used to store Process objects
 * Date: Oct. 1, 2018
 */
 
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <dirent.h>
#include "Process.h"
#include "ProcessList.h"
 
 using namespace std;
 
 /* ProcessList constructor 
  * Used to grab and store process data in a list of Process objects
  */
ProcessList::ProcessList() {
	
}

/* to_string() function
 * Used to print and return out a string of all attributes 
 * like all the processes inside this list, takes no parameters
 */
 string ProcessList::to_string() {
	 
	 
 }
 
 /* getProcessByID() function
  * Returns a Process object with the same id as the parameter
  */
  Process ProcessList::getProcessByID(string pid) {
	  
  }

/* getProcessList() function
 * Getter method for the processList attribute, contains Process objects
 */
 vector<Process> ProcessList::getProcessList() {
	return processList;
}
