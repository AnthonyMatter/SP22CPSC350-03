/*
File name: FileProcessor.cpp
This file is meant to process each line of the input file and make sure that when a line is grabbed from the input. That each word has a space between them and is translated separately.
*/
#include "FileProcessor.h"
#include "Translator.h"  // Since I create an object of the Translator class, I have to include the Translator header file here
#include <fstream>
#include <iostream>
using namespace std;


FileProcessor::FileProcessor(){

}

FileProcessor::~FileProcessor(){

}

/*
Function Name: processFile
What it does: This function first opens both the input and output files. Then it uses a while loop to go through each line of the input file. Each line of the input file will then be converted into Tutnese, using an object from the Translator class. Each translated line will be put into the output file and after each line, the newLine string is reset. Finally, both the input and output files close.
Parameters and Data types: string inputName and string outputName
Return value and data type: Nothing is returned since it is a void function, but each translated line of the input file is written into the output file.
*/
void FileProcessor::processFile(string inputName, string outputName){
  // use fstream objects to read and write to files
  Translator converter; // here you can use an object of the Translator class
  // for each line of the input file, call the Translator object's translateEnglishSentence function
  ofstream out_file;
  ifstream in_file;
  string line;
  string newLine = "";
  in_file.open(inputName);
  out_file.open(outputName);

  while(getline(in_file,line)){
    newLine = converter.translateEnglishSentence(line);
    out_file << newLine << endl;
    newLine = "";
  }
  in_file.close();
  out_file.close();
}
