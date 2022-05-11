/*
File Name: Sorting.cpp
What it does: This file is designed to implement the sorting algorithms Merge Sort, Selection Sort, and Insertion Sort. These algorithms are then tested
against some numbers and we used the time class from the Standard C Library to keep track of how long it took for the program to execute.
*/

#include "Sorting.h"
#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
using namespace std::chrono;

Sorting::Sorting(){

}

Sorting::~Sorting(){


}

/*
Function Name: Sort
What it does: This function reads in a text file full of double values. The first line read will always be the amount of values in the text file and then
when each value being read is inserted into three separate dynamic arrays of type double. Once all values are read into each dynamic array, the functions are called for
the sorting algorithms. Each sorting algorithm will then take in one of the dynamic arrays.
Parameters and Data Types: The only parameter for this function is a string value that is meant to be the text file.
Return value: Since this is a void function, no value is returned.
*/
void Sorting::Sort(std::string file){
  std::ifstream in_file;
  double number;
  in_file.open(file);
  in_file >> this->arraySize;
  UnsortedList = new double[this->arraySize];
  UnsortedList2 = new double[this->arraySize];
  UnsortedList3 = new double[this->arraySize];

  for(int i = 0; i < this->arraySize; i++){
    in_file >> number;
    UnsortedList[i] = number;
    UnsortedList2[i] = number;
    UnsortedList3[i] = number;

  }

  std::cout << "Merge Sort" << std::endl;
  std::clock_t c_sMerge = std::clock();
  std::cout << "Start Time: " << (1000.0 * c_sMerge)/CLOCKS_PER_SEC << "ms" << std::endl;

  MergeSort(UnsortedList, 0, this->arraySize - 1);

  std::clock_t c_eMerge = std::clock();
  std::cout << "End Time: " << (1000.0 * c_eMerge)/CLOCKS_PER_SEC << "ms" << std::endl;
  std::cout << "Difference: " << c_eMerge - c_sMerge << "ms" << std::endl;

  std::cout << std::endl;
  std::cout << "Selection Sort" << std::endl;
  std::clock_t c_sSelection = std::clock();
  std::cout << "Start Time: " << (1000.0 * c_sSelection)/CLOCKS_PER_SEC << "ms" << std::endl;

  SelectionSort(UnsortedList2);

  std::clock_t c_eSelection = std::clock();
  std::cout << "End Time: " << (1000.0 * c_eSelection)/CLOCKS_PER_SEC << "ms" << std::endl;
  std::cout << "Difference: " << c_eSelection - c_sSelection << "ms" << std::endl;


  std::cout << std::endl;
  std::cout << "Insertion Sort" << std::endl;
  std::clock_t c_sInsertion = std::clock();
  std::cout << "Start Time: " << (1000.0 * c_sInsertion)/CLOCKS_PER_SEC << "ms" << std::endl;

  InsertionSort(UnsortedList3);

  std::clock_t c_eInsertion = std::clock();
  std::cout << "End Time: " << (1000.0 * c_eInsertion)/CLOCKS_PER_SEC << "ms" << std::endl;
  std::cout << "Difference: " << c_eInsertion - c_sInsertion << "ms" << std::endl;
}

/*
Function Name: Merge
What it does: This function is apart of the MergeSort sorting algorithm that handles making the comparisons
between left and right array indexes to determine which value is lower. This process is designed to be able to merge
two arrays into one sorted array. It would do this by first checking if one of the arrays has already been fully checked. If not,
then comparisons are made between values in different arrays. If a value from the left or right array is added to the merged array, then
the next position is checked in that specific array. If not, it stays at the same position. This will continue until all values are in one sorted array.
Parameters and Data Types: This function takes in a dynamic array, an integer for the first position, an integer
for the middle position, and an integer for the last position.
Return value and Data Types: Since this is a void function, no value is returned.
*/
void Sorting::Merge(double* MergeList, int m, int middle, int last){
  int newSize = last - m + 1;
  int currPos = 0;
  int left = 0;
  int right = 0;

  double* merged = new double[newSize];
  left = m;
  right = middle + 1;

  while(left <= middle && right <= last){
    if(MergeList[left] <= MergeList[right]){
      merged[currPos] = MergeList[left];
      left++;
    }
    else{
      merged[currPos] = MergeList[right];
      right++;
    }
    currPos++;
  }

  while(left <= middle){
    merged[currPos] = MergeList[left];
    left++;
    currPos++;
  }

  while(right <= last){
    merged[currPos] = MergeList[right];
    right++;
    currPos++;
  }

  for(currPos = 0; currPos < newSize; currPos++){
    MergeList[m + currPos] = merged[currPos];
  }

}

/*
Function Name: MergeSort
What it does: This function is a sorting algorithm that breaks up the array into two halves, and then breaks those halves
into halves, and repeats this process until each element has their own array. Once that happens, elements will begin to merge with one another and sort
so that they are in ascending order. This process of remerging will continue until all of the elements are in one list and at that point, the
whole list will be sorted.
Parameters and Data Types: This function takes in a dynamic array, an integer to represent the first element and one
to represent the last element.
Return Value and Data Types: Since this is a void function, no value is returned.
*/
void Sorting::MergeSort(double* MergedList, int m, int last){

  int middle = 0;

  if(m < last){
    middle = (m + last) / 2;

    MergeSort(MergedList, m, middle);
    MergeSort(MergedList, middle + 1, last);
    Merge(MergedList, m, middle, last);
  }

}

/*
Function Name: SelectionSort
What it does: This function is a sorting algorithm that essentially runs through the whole list of values
and whichever one is the largest, it will swap with the last value in the list. The size of the list then decrements by 1
so that value can't be accessed against. This process keeps going until the size of the list reaches 0.
Parameters and Data Types: The only parameter for this function is a dynamic array.
Return value and Data Types: Since this is a void function, no value is returned.
*/
void Sorting::SelectionSort(double* SelectedList){

  double largest = SelectedList[0];
  double temp = 0;
  int largestPosition = 0;
  int list = this->arraySize;

  while(list > 0){
    for(int i = 0; i < list; i++){
      if(SelectedList[i] > largest){
        largest = SelectedList[i];
        largestPosition = i;
      }
    }
    
    temp = SelectedList[list - 1];
    SelectedList[list - 1] = largest;
    SelectedList[largestPosition] = temp;

    largest = 0;
    list--;
  }

}

/*
Function Name: InsertionSort
What it does: This function is a sorting algorithm that essentially starts at the second value of the dyanmic array. It then
checks if its previous value is greater and if so, they will swap, but if not, then the program will iterate to the next position of the list
and check the conditions again. This program ends once it has iterated through the whole list.
Parameters and Data Types: The only parameter for this function is a dynamic array.
Return value and Data Types: Since this is a void function, no value is returned.
*/
void Sorting::InsertionSort(double* InsertedList){

  double temp = 0;
  int position = 0;
  int n = this->arraySize;

  for(int i = 1; i < n; i++){
    position = i;

    while(position > 0 && InsertedList[position - 1] > InsertedList[position]){
      temp = InsertedList[position];
      InsertedList[position] = InsertedList[position - 1];
      InsertedList[position - 1] = temp;
      position--;
    }
  }

}
