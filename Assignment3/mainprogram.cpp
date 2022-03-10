/*
Function Name: main()
What it does: This function asks the user to type in the names of the input and output files and then uses an object from the FileProcessor class to read 
and translate the input file and write into the output file.
Parameters and Data Types: No Parameters
Return value and data type: Function returns 0 with no return type.
*/
#include "FileProcessor.h"
#include <iostream>
using namespace std;

// this should be everything needed in the main function
int main(){
  FileProcessor f; // using default constructor, you can overload
  string inputName;
  string outputName;
  cout << "Type in the input file name:" << endl;
  cin >> inputName;
  cout << "Type in the output file name:" << endl;
  cin >> outputName;
  // ask the user for input and output file names
  f.processFile(inputName,outputName);
  return 0;
}
