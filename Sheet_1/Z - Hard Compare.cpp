#include <iostream>
#include <cmath>
using namespace std;
int main() {
  // Declare four variables to store the input numbers
long long A, B, C, D;
  // Read the input from the standard input stream
cin >> A >> B >> C >> D;
  // Compare the powers of A and B with C and D using logarithms
  if (log(A) * B > log(C) * D) {
    // Print "YES" if A^B is greater than C^D
    cout << "YES" << endl;
  } else {
    // Print "NO" otherwise
    cout << "NO" << endl;
  }
  return 0;
}