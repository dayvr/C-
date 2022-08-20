#include <bits/stdc++.h>
using namespace std;

/*
Divide the array in sorted and unsorted parts. Sorted part empty and the unsorted part being A[0..N-1],
repeatedly find the smallest integer in the unsorted part and swap it to the end of the sorted part.
*/

void selection_sort(int a[], int arr_len) {

  for (int i = 0; i < arr_len; i++) {
    int min = i;
    for(int j = i + 1; j < arr_len; j++) {
      if (a[j] < a[min])
        min = j;
    }
    swap(a[i], a[min]);
  }
}

int main() {
  int len = 5;
  int arr[len] = {3, 5, 4, 1, 2};

  selection_sort(arr, len);
  
  for (int i = 0;i < len; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}
