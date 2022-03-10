/*
File Name: Model.h
This file declares the constructor, deconstructor, the string functions translateStringCharacter and translateDoubleCharacter, each with a char parameter type as well 
as a boolean function with a char parameter type.
*/
using namespace std;
#include <string>

class Model{
public:
  Model();
  ~Model();
  string translateStringCharacter(char c);
  string translateDoubleCharacter(char c);
  bool isVowel(char c);
};
