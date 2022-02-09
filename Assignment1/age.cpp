#include <iostream>
#include <string>
#include <array>
using namespace std;

int main(){
  int arr[3];
  int greatest = 0;
  int least = 0;
  int y;
  int z;
  int temp;


  for (int i = 0; i < 3; i++){ //Storing three age values in an array
    cout << "Enter an age:" << endl;
    cin >> arr[i];
  }

  for(y = 0; y < 3; y++)//Puting the array into descending order
  {
    for(z = y + 1; z < 3; z++)
    {
      if(arr[y] < arr[z])
      {
        temp = arr[y];
        arr[y] = arr[z];
        arr[z] = temp;
      }
    }
  }
  cout << "The oldest age is: " << arr[0] << endl;
  cout << "The youngest age is: " << arr[2] << endl;
}
