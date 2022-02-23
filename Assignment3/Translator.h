/*
File Name: Translator.h
This file declares the constructor, deconstructor, and two string functions translateEnglishWord and translateEnglishSentence, each with a string parameter type.
*/
using namespace std;
#include <string>

class Translator{
public:
  Translator();
  ~Translator();
  string translateEnglishWord(string word);
  string translateEnglishSentence(string sent);
};
