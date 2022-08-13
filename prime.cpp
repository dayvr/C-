#include <iostream>

using namespace std;

// Find whether a number is prime or not.

int main() {
  bool isPrime = true;
  if (number <= 1) {
     isPrime = false;
  }
  for (int i = 2; i <= number/2; i++) {
     if (number % i == 0) {
         isPrime = false;
         break;
     }
  }

  if(isPrime) {
     cout << "prime";
  }
  else {
     cout << "not prime";
  }
  return 0;
}
