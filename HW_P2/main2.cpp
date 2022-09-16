/******* Problem 2 *********/

#include <iostream>
using namespace std;
double a, b;

int main() {
  cout << " enter a: ";
  cin >> a;
  cout << " enter b: ";
  cin >> b;

  if (a > b) {
    cout << "the first number is greater";
  
  } else if ( a == b) {
    cout << " The first number is equal to the second ";
    
  } else { 
    cout << "The second number is greater";
    }
}