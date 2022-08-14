#include <iostream>
 
using namespace std;
 
int main() {
 int decimal = 10, binary = 0;
 int remainder, product = 1;
 
 while (decimal != 0) {
   remainder = decimal % 2;
   binary += (remainder * product);
   decimal = decimal / 2;
   product *= 10;
 }
 cout << "Binary Number = " << binary;
 return 0;
}
