/*
File Name: Model.cpp
This file is meant to be where english characters are translated into the Tutnese language.
*/
#include "Model.h"
#include <iostream>
#include <string>

using namespace std;

Model::Model(){

}

Model::~Model(){

}

/*
Function Name: translateStringCharacter
What it does: Takes in a char character and uses a switch statement to translate the character into Tutnese.
Parameters name and Data Type: char c
Return value and type: Returns a character as a string type
*/
string Model::translateStringCharacter(char c){
  switch(c)
  {
      case 'A':
        return "A";
        break;
      case 'a':
        return "a";
        break;
      case 'B':
        return "Bub";
        break;
      case 'b':
        return "bub";
        break;
      case 'C':
        return "Cash";
        break;
      case 'c':
        return "cash";
        break;
      case 'D':
        return "Dud";
        break;
      case 'd':
        return "dud";
        break;
      case 'E':
        return "E";
        break;
      case 'e':
        return "e";
        break;
      case 'F':
        return "Fuf";
        break;
      case 'f':
        return "fuf";
        break;
      case 'G':
        return "Gug";
        break;
      case 'g':
        return "gug";
        break;
      case 'H':
        return "Hash";
        break;
      case 'h':
        return "hash";
        break;
      case 'I':
        return "I";
        break;
      case 'i':
        return "i";
        break;
      case 'J':
        return "Jay";
        break;
      case 'j':
        return "jay";
        break;
      case 'K':
        return "Kuck";
        break;
      case 'k':
        return "kuck";
        break;
      case 'L':
        return "Lul";
        break;
      case 'l':
        return "lul";
        break;
      case 'M':
        return "Mum";
        break;
      case 'm':
        return "mum";
        break;
      case 'N':
        return "Nun";
        break;
      case 'n':
        return "nun";
        break;
      case 'O':
        return "O";
        break;
      case 'o':
        return "o";
        break;
      case 'P':
        return "Pub";
        break;
      case 'p':
        return "pub";
        break;
      case 'Q':
        return "Quack";
        break;
      case 'q':
        return "quack";
        break;
      case 'R':
        return "Rug";
        break;
      case 'r':
        return "rug";
        break;
      case 'S':
        return "Sus";
        break;
      case 's':
        return "sus";
        break;
      case 'T':
        return "Tut";
        break;
      case 't':
        return "tut";
        break;
      case 'U':
        return "U";
        break;
      case 'u':
        return "u";
        break;
      case 'V':
        return "Vuv";
        break;
      case 'v':
        return "vuv";
        break;
      case 'W':
        return "Wack";
        break;
      case 'w':
        return "wack";
        break;
      case 'X':
        return "Ex";
        break;
      case 'x':
        return "ex";
        break;
      case 'Y':
        return "Yub";
        break;
      case 'y':
        return "yub";
        break;
      case 'Z':
        return "Zub";
        break;
      case 'z':
        return "zub";
        break;
      default:
        break;
  }
}

/*
Function Name: isVowel
What it does: Uses a switch statement and if a char character is a vowel, return true, if not, return false.
Parameters name and Data Type: char c
Return value and type: Returns a boolean type as either true or false
*/
bool Model::isVowel(char c){
  bool vowel = false;
  switch(c)
  {
    case 'A':
      vowel = true;
    case 'a':
      vowel = true;
    case 'E':
      vowel = true;
    case 'e':
      vowel = true;
    case 'I':
      vowel = true;
    case 'i':
      vowel = true;
    case 'O':
      vowel = true;
    case 'o':
      vowel = true;
    case 'U':
      vowel = true;
    case 'u':
      vowel = true;
  }
  return vowel;
}


/*
Function Name: translateDoubleCharacter
What it does: Checks if the char character is a vowel and then it checks whether it's upper or lowercase. If it's a vowel, return "squat"/"Squat" + the already 
called translateStringCharacter function. If it's not a vowel return "squa"/"Squa" + the already called translateStringCharacter function.
Parameters name and Data Type: char c
Return value and type: Returns a word as a string type
*/
string Model::translateDoubleCharacter(char c){
  // add code to describe scenario for letter pairs
  // if vowel -> add prefix "squat" then repeat vowel "oo" becomes "squato"
  // if consonant -> add prefix "squa" then converted consonant "ll" becomes "squatlul"
  if(isVowel(c)){
    if(isupper(c)){
      return ("Squat" + translateStringCharacter(c));
    }
    else{
      return ("squat" + translateStringCharacter(c));
  }
  }
  else{
    if(isupper(c)){
      return("Squa" + translateStringCharacter(c));
    }
    else{
      return("squa" + translateStringCharacter(c));
    }
  }


}
