#include <iostream>
 
using namespace std;

int main() {
 /*
To check if a number is a palindrome, first reverse the number. 
If the reverse of the number is equal to the original number, the number is a palindrome, otherwise it is not.
*/
 
 int number = 121;
 int reverse = 0, remainder = 0;
 int tmp;
 
 tmp = number;
 while (tmp != 0) {
  remainder = tmp % 10; // Get the last digit of temp
  reverse = reverse * 10 + remainder;
  tmp = tmp / 10; // Remove the last digit
 }
 
 if (number == reverse) {
  cout << "is palindrome";
 } else {
  cout << "not a palindrome";
 }
