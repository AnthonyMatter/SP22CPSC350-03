/*
File Name: FileAnalyzer.cpp
This file is meant to process each line of a file and determine and there are any syntax errors involving the
delimiters ({}, [], ()). If there are any errors in the delimeters, the program will say what line of code
caused the error.
*/
#include "FileAnalyzer.h"
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

FileAnalyzer::FileAnalyzer(){

}
FileAnalyzer::~FileAnalyzer(){

}

/*
Function Name: ErrorFinder
What it does: This function takes in the name of the file, process the file and iterates through each line
of the file looking for any syntax errors that involve delimiters. If there are any errors with the delimeters,
then the function will print which line caused the error and the expected delimeter that will fix the error.
Parameters and Data Types: String file
Return value and data type: Since this is a void function, nothing is returned if there is an error involving
a delimeter, a statement will print detailing the location of the error and what could fix the error.
*/
void FileAnalyzer::ErrorFinder(string file){
  AStack<char> myStack(100);
  ifstream in_file;
  string line;
  this->LineNumber = 1;
  int bracketCount = 0;
  in_file.open(file);

    if(in_file.fail()){
      cout << "Could not open " << file << "." << endl;
      exit(1);
    }
  while(getline(in_file, line)){ //Iterates through each line of the file

    for(char c: line){ //Iterates through each character of line

      if(c == '('){
        myStack.push(c);
      }
      else if(c == '['){
        myStack.push(c);
      }
      else if(c == '{'){
        myStack.push(c);
      }
      else if(c == ')' || c == '}' || c == ']'){
        if(myStack.isEmpty()){
          cout << "Line " << this->LineNumber << ": expected open delimiter and found " << c << endl;
          this->ErrorCounter++;
          exit(1);
        }
        char pop = myStack.pop();
        if(pop == '('){
          if(c != ')'){
            cout << "Line " << this->LineNumber << ": expected ) and found " << c << endl;
            this->ErrorCounter++;
            exit(1);
          }
        }
        else if(pop == '['){
          if(c != ']'){
            cout << "Line " << this->LineNumber << ": expected ] and found " << c << endl;
            this->ErrorCounter++;
            exit(1);
          }
        }
        else if(pop == '{'){
          if(c != '}'){
            cout << "Line " << this->LineNumber << ": expected } and found " << c << endl;
            this->ErrorCounter++;
            exit(1);
          }
        }
      }
    }
    this->LineNumber++;
  }

  if(in_file.eof() && bracketCount != 0){ //If end of file is reached and only value left in stack is an open bracket, then error is returned
    cout << "Reached end of file: missing }" << endl;
    this->ErrorCounter++;
  }
  in_file.close();
  Determiner();

}

/*
Function Name: Determiner
What it does: This function basically checks if there were any errors with the delimeters when going through
every line of the file and if there were, then the line that caused the error prints and the program exist. If
there were no errors, then the user will be asked if they want to open another file and to type either Y for yes or
N for no. The process will then repeat until a file has an error with delimeters and the program aborts.
Parameters and Data Types: No parameters or data types
Return value and data type: Since this is a void function, nothing is returned, but depending on whether there are
errors with the delimiters, the user will either see a printed statement or be exited out of the program.
*/
void FileAnalyzer::Determiner(){
  bool asker = false;
  string response = "";
  string nameOfFile = "";
  if(this->ErrorCounter == 0){ //If there are no errors in delimeters, then the user will be asked if they want to open another file.
    cout << "This file has correct syntax, would you like to open another file (Y/N):" << endl;
    while(asker == false){
    cin >> response;
    if(response == "Y" || response == "y"){
      cout << "Type in the name of the file: " << endl;
      cin >> nameOfFile;
      ErrorFinder(nameOfFile);
      break;
    }
    else if(response == "N" || response == "n"){
      asker = true;
      break;
    }
    else{
      cout << "Please type in either Y for yes or N for no:" << endl;
      asker = false;
      }
    }
  }
}
