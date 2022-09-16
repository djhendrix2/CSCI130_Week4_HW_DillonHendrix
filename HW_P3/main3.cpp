/**** Last Factorial *****/

#include <iostream>
using namespace std;

int main() {
  // Read in # of test cases
  int num_cases;
  cin >> num_cases;

  // Declare values for the loop
  int fac_val;

  // Make a loop for test cases
  for (int i = 0; i < num_cases; i++) {
    // take in a value for calculation
    cin >> fac_val;
    int value = 1;

    // make this calculation with another loop
    for (int k = 0; k < fac_val; k++) {
      value = value * (k + 1);
    }

    // find the value of the last digit (%10)
    cout << value; // comment out for kattis just a check for us

    // output the last digit
  }
}