#include <iostream>

class Sorting{
public:
  Sorting();
  ~Sorting();
  std::string file;
  int arraySize = 0;
  int halfWay = arraySize/2;
  void MergeSort(double* MergedList, int m, int last);
  void Merge(double* MergeList, int m, int j, int last);
  void SelectionSort(double* SelectedList);
  void InsertionSort(double* InsertedList);
  void Sort(std::string file);
  double* UnsortedList;
  double* UnsortedList2;
  double* UnsortedList3;

};
