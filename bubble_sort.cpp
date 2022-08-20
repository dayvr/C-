#include <iostream>

using namespace std;

// Bubble Sort in descending order.
void sort_elements(int arr[], int size) {
  int tmp;
  
  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++) {
      if (arr[i] < arr[j]) {
        // Swap elements
        tmp = arr[j];
        arr[j] = arr[i];
        arr[i] = tmp;
      }
    }
  }
 }

 int main () {
   int size = 5;
   int arr[size] = {16, 2, 70, 98, 7};

   sort_elements (arr, 5);

   for (int i = 0; i < size; i++) {
     cout << arr[i] << ' ';
   }
   return 0;
 }
