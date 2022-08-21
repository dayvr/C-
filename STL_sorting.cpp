#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Sorting program using the sort() built-in function in C++ STL

/* Auxiliary function that takes in two variables and returns an integer:
- true or 1: if a should appear before b
- false or zero: if a should appear after b */
int compare(int a, int b) {
  int rem1 = a % 2;
  int rem2 = b % 2;

  if (rem1 == 0 && rem2 == 0) {
    return a > b;
  }
  else if (rem1 == 1 && rem2 == 1) {
    return a < b;
  }
  else if (rem1 == 0) { // rem2 == 1
    return 0;
  }
  else  // rem1 == 1 & rem2 == 0
    return 1;
}

int main() {
  int len = 9;
  int arr[len] = {5, 3, 6, 4, 8, 1, 7, 2, 9};
  vector<int> v = {1,2,3,4,5,6,7,8,9};

  // Array sorting
  sort(arr, arr+len);
  cout << "array: ";
  for(int i = 0; i < len; i++) {
    cout << arr[i] << " ";
  }
  cout << '\n';

  /* Vector sorting 
     using auxiliary function as the third parameter in sort() built-in function
     to sort first odd numbers in ascending order, then even numbers in descending order */
  sort(v.begin(), v.end(), compare);
  cout << "vector: ";
  for (int j = 0; j < v.size(); j++) {
    cout << v[j] << " ";
  }
  return 0;
}

// Output
// array: 1 2 3 4 5 6 7 8 9
// vector: 1 3 5 7 9 8 6 4 2
