/*
File Name: FileProcessor.h
This file is a class that declares the constructor, deconstructor, and the void function processFile with two string parameter types.
*/

#include <string>
using namespace std;

class FileProcessor{
public:
  FileProcessor();
  ~FileProcessor();
  void processFile(string inputfile, string outputfile);
};
