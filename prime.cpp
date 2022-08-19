#include <iostream>

using namespace std;

/*
Prime numbers are natural numbers greater than 1 that cannot 
be expressed as a product of two smaller natural numbers.
*/

int main() {
  // Find whether a number is prime or not.
  // Prime number is greater than 1 with only two factors, 1 and itself.
  
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
