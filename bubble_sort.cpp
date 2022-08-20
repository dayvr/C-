#include <bits/stdc++.h>
using namespace std;

// Bubble Sort in descending order
void bubble_sort_descending(int arr[], int size) {
  int tmp;
  
  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++) {
      if (arr[i] < arr[j]) {
        // Swap elements using a temporal variable
        tmp = arr[j];
        arr[j] = arr[i];
        arr[i] = tmp;
      }
    }
  }
  for (int i = 0; i < size; i++) cout << arr[i] << ' ';
}

// Bubble Sort in ascending order
void bubble_sort_ascending(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    for(int j = 1; j < size - i; j++) {
      if (arr[j] < arr[j-1]) {
        swap(arr[j], arr[j-1]); // Swap using built-in function
      }
    }
  }
  for (int i = 0; i < size; i++) cout << arr[i] << ' ';
  cout << "\n";
}

int main() {
  int size = 6;
  int arr[6] = {6, 3, 5, 4, 1, 2};
  int arr2[6] = {6, 3, 5, 4, 1, 2};

  bubble_sort_ascending(arr2, size);
  bubble_sort_descending(arr2, size);
  
  return 0;
}
