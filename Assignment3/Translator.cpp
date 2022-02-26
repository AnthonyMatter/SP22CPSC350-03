/*
File name: Translator.cpp
The purpose of this file is to use two functions that decide when to translate a double character or a single character and when to separate each word from each other 
when a full sentence is retrieved.
*/
#include "Translator.h"
#include "Model.h" // Since I create an object of the Model class, I have to include the Model header file here
#include <iostream>


Translator::Translator(){

}

Translator::~Translator(){

}

/*
Function Name: translateEnglishWord
What it does: The purpose of this function is use a for loop to go through a word and if the current character equals the character next to it, call the 
translateDoubleCharacter, if not, call the translateStringCharacter.
Parameters name and Data Type: string word
Return value and type: Returns the translated word as a string data Type
*/
string Translator::translateEnglishWord(string word){
  // here check each letter of word
  Model model; // this is object of Model class to use translate functions
  // either call model's translateStringCharacter or translateDoubleCharacter function
  string translate = "";
  for(int i = 0; i < word.length(); i++){
    if(word[i] == word[i+1]){
      translate += model.translateDoubleCharacter(word[i]);
      ++i;
    }
    else{
      translate += model.translateStringCharacter(word[i]);
    }
  }

  return translate;
}

/*
Function Name: translateEnglishSentence
What it does: The purpose of this function is to use a for each loop to go through each character in the sentence that was retrieved. If a character is not 
an alphabetical character, a new string tsentence adds the translated form of that word with a space. If it is alphabetical, then the english version of the word 
continues to add new characters until a non-alphabetical character is reached. Then the word will be translated with a space.
Parameters and Data type: string sent
Return value and type: The full sentence with all the translated words inside the sentence is returned as a string type.
*/
string Translator::translateEnglishSentence(string sent){
  // here extract each word in a sentence and call translateEnglishWord on it
  // to do so, you can use the following algorithm:
      // word = ""
      // for each character c in sentence
          // if c is a word delimiter (" ", . , ! etc.)
                // word is found
          // otherwise, word += c // c is just a letter, keep going
  string tsentence = "";
  string word = "";
  for(char c: sent){
    if(!(isalpha(c))){
      tsentence += translateEnglishWord(word) + " ";
      word = "";
    }
    else{
      word += c;
    }
  }

  tsentence += translateEnglishWord(word);
  return tsentence;

}
