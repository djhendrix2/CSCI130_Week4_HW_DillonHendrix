

#include <iostream>
using namespace std;

int main() {

  // Initialize variables
  int a = 5, b = 2, c = 4, d = 6, e = 3;

  if (a >= b)
    cout << "Part a is true.";
  else
    cout << "Part a is false.";
  
  if (a != b)
    cout << "\nPart b is true.";
  else
    cout << "\nPart b is false.";
  
  if (d % b == c % b)
    cout << " Part c is true.";
  else
    cout << " Part c is false.";
  
  if (a * c != d * b)
    cout << " Part d is true.";
  else
    cout << " Part d is false.";
  
  if (d * b == c * e)
    cout << " Part e is true.";
  else
    cout << " Part e is false.";
  
  if (!(a * b))
    cout << " Part f is true.";
  else
    cout << " Part f is false.";
  
  if (!(a % b * c))
    cout << " Part g is true.";
  else
    cout << " Part g is false.";
  
  if (!(c % b * a))
    cout << " Part h is true.";
  else
    cout << " Part h is false.";
  
  if (b % c * a)
    cout << " Part i is true.";
  else
    cout << " Part i is false.";
}