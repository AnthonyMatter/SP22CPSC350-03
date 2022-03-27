/*
File Name: mainprogram.cpp
This file basically calls the function in FileAnalyzer.cpp in order to iterate through
all lines of a file to check for delimiter errors.
*/
#include "FileAnalyzer.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv){

  FileAnalyzer f;
  string file = argv[1];
  f.ErrorFinder(file);



  return 0;
}
