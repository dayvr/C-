#include <iostream>
using namespace std;

/* Factorization is when you break a number into smaller numbers that, 
   multiplied together, give you that original number. */

// Count the number of factors of a number.
int count_factors(int n) {
 int count = 0;
 
 for (int i = 1; i <= n; i ++)
   if (n % i == 0)
     count++;
 return count;
}
 
 
int main() {
 int n = 36;
 cout << count_factors(n);
  return 0;
}
