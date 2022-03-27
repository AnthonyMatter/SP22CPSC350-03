#include "AStack.h"
#include <iostream>
#include <sstream>
using namespace std;

class FileAnalyzer{
public:
  FileAnalyzer();
  ~FileAnalyzer();
  void ErrorFinder(string file);
  void Determiner();
  int LineNumber = 0;
  char character;
  int ErrorCounter = 0;
};
