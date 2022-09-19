/***** Jumbo Javelin ******/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  // Read in # of test cases
  int num_cases;
  cin >> num_cases;

  // Declare values for the loop
  int j1, j_final;

    j_final = 0;
  // Make a loop for test cases
  for (int i = 1; i < num_cases; i++) {
    // take in a value for calculation
    cin >> j1;

    // make this calculation with another loop
    j_final = j_final + j1 - 1;
  
    }
  cin >> j1;
  j_final = j_final + j1;
  cout << j_final << endl;
  
}