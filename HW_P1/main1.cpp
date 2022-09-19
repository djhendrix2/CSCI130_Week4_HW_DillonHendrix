

#include <iostream>
using namespace std;

int main() {

  // Initialize variables
  int a = 5, b = 2, c = 4, d = 6, e = 3;

  if (a >= b) {
    cout << "Part a is true.";
    }
  else
    cout << "Part a is false.";
    
  if (a != b) {
    cout << "\nPart b is true.";
    }
  else
    cout << "\nPart b is false.";
  
  if (d % b == c % b) {
    cout << "\nPart c is true.";
    }
  else
    cout << "\nPart c is false.";

  if (a * c != d * b) {
    cout << "\nPart d is true.";
    }
  else
    cout << "\nPart d is false.";
  if (d * b == c * e) {
    cout << "\nPart e is true.";
    }
  else
    cout << "\nPart e is false.";
  
  if (!(a * b)) {
    cout << "\nPart f is true.";
    }
  else
    cout << "\nPart f is false.";
  
  if (!(a % b * c)) {
    cout << "\nPart g is true.";
    }
  else
    cout << "\nPart g is false.";
  
  if (!(c % b * a)) {
    cout << "\nPart h is true.";
    }
  else
    cout << "\nPart h is false.";
  
  if (b % c * a) {
    cout << "\nPart i is true.";
    }
  else
    cout << "\nPart i is false.";
}