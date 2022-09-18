/***** Cannon Ball Problem ******/

#include <iostream>
using namespace std;
#include <iomanip>
#include <cmath>

int main() {
  // Read in line 1. Tells how many test cases.
  int N;
  cin >> N;

  // Vars for loop
  double v0, x1, theta, h1, h2, t, v0x, y_total, cos_theta, sin_theta, ys, xc;
  const double g = 9.81; // acceleration due to gravity 

  // Initial loop for the amount of test case.
  while (N > 0){
    cin >> v0 >> theta >> x1 >> h1 >> h2;

    // Convert radians into degrees
    xc = theta * 3.14159 / 180;
    cos_theta = cos(xc); 

    ys = theta * 3.14159 / 180;
    sin_theta = sin(ys);

    // Solve for initial v0x to find time
    v0x = (v0 * sin_theta);
    t = v0x / x1; 
    cout << "t = " << t << endl;

    
  }
  
  }