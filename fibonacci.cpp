#include <iostream>
 
using namespace std;
 
// Recursive fibonacci
int fibonacci(int n) {
  /*
  Each element in fibonacci is a sum of its previous two elements. 
  Recursively sum the last two elements until the base case.
  */
 
  // Base Case
  if (n <= 1) {
    return n;
  }
  // Recursive Case
  return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main () {
  int result;

  result = fibonacci (7);

  cout << result << endl;
}
