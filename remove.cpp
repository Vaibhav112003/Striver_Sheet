#include <bits/stdc++.h>
using namespace std;

vector<int> bhavna(int arr[], int n) {
  vector<int> v1;
  vector<int> v2;
  int k = 0;
  int l = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] > 0) {
      v1.push_back(arr[i]);
      k++;
    } else if (arr[i] < 0) { // Handle negative zero or other edge cases if needed
      v2.push_back(arr[i]);
      l++;
    }
  }

  int i_index = 0;
  int j_index = 0;
  while (i_index < k && j_index < l) {
    if (-v2[j_index] == v1[i_index]) {
      v1.erase(v1.begin() + i_index); // Remove element from v1
      v2.erase(v2.begin() + j_index); // Remove element from v2
    } else if (-v2[j_index] < v1[i_index]) {
      j_index++; // Move to the next element in v2
    } else {
      i_index++; // Move to the next element in v1
    }
  }

  // Option 1: Keep all remaining positive numbers
  return v1;  // Uncomment this line for all positive numbers

  // Option 2: Keep only the first positive number (if needed)
  // if (v1.size() > 1) {
  //   v1.erase(v1.begin() + 1, v1.end()); // Remove all elements except the first
  // }
  // return v1;  // Uncomment these lines for only the first positive number
}

int main() {
  int n;
  cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  vector<int> result = bhavna(arr, n);

  // Print the result vector
  cout << "Result: ";
  for (int num : result) {
    cout << num << " ";
  }
  cout << endl;

  return 0;
}
