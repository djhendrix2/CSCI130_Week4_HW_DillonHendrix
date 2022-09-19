/***** Cannon Ball Problem ******/

#include <iostream>
using namespace std;
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
    v0x = (v0 * cos_theta);
    t = x1 / v0x; 
    // cout << "t = " << t << endl;

    // Solve for y_total
    y_total = ((v0 * t * sin_theta) - (.5*(g*pow(t,2))));
    // cout << "y_total = " << y_total << endl;

    // Add a loop to denote if its safe or not

    if ((y_total > (h1+1)) && (y_total < (h2-1))){
      cout << "Safe" << endl;
    }
    else {
      cout << "Not Safe!!" << endl;
    }
    N--;
  }
  
  }