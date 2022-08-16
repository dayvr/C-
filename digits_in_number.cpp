#include <iostream>

using namespace std;
 
int count_digits (int number) {
  /* Count digits in a number by recursively dividing the number by 10. 
  Each time the number is divided by 10, it loses one digit. */
  
 // Base Case
 // If there is only a single digit left, return 1. 
 if (abs(number)/10 == 0) {
   return 1;
 }
 // Recursive Case 
 else {
   return 1 + count_digits(number / 10);
 }
}

int main () {
  int num = 30057;
  int result = count_digits(num);
  cout << result;
  return 0;
}
