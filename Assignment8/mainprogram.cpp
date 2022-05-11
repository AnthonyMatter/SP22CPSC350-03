#include "Sorting.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char** argv){
  Sorting s;
  string file = argv[1];
  s.Sort(file);


  return 0;
}
