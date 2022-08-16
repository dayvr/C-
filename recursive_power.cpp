#include <iostream>
 
using namespace std;

int power (int base , int exponent ) {
   // Base case
   if (exponent == 0) {
       return 1;
   }
   // Recursive case
   else {
       return base * power(base, exponent-1);
   }
}

int main () {
  int b = 3;
  int e = 2;
  cout << power(b, e);
  return 0;
}
  
