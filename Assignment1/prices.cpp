#include <iostream>
#include <string>
using namespace std;

int main(){
  double x;
  double sum = 0;
  cout << "Enter a price: " << endl;
  cin >> x;
  while (x >= 0){ //Until price is negative, every price is added to sum
    sum += x;
    cin >> x;
  }

  cout << "The total price is $" << sum << "." << endl; //Total price printed
  return 0;

}
