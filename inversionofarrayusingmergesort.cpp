#include <iostream>
#include <vector>

using namespace std;

 // Global variable to count inversions

int merge(vector<int>& arr, int s, int e) {
    int mid = (s + e) / 2;
    int left = s, right = mid + 1;
    vector<int> temp; // Temporary vector to store merged elements
    int cnt = 0;
    // Count inversions while merging
    while (left <= mid && right <= e) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left++]);
        } else {
            temp.push_back(arr[right++]);
            cnt += (mid - left + 1); // Count inversions here
        }
    }

    // Copy remaining elements from left or right subarray
    while (left <= mid) {
        temp.push_back(arr[left++]);
    }
    while (right <= e) {
        temp.push_back(arr[right++]);
    }

    // Copy elements back to the original array
    for (int i = s; i <= e; i++) {
        arr[i] = temp[i - s];
    }
    return cnt;

}

int mergesort(vector<int>& arr, int s, int e) {
    int cnt = 0;
    if (s >= e) {
        return cnt;
    }
    int mid = (s + e) / 2;

    cnt += mergesort(arr, s, mid);
    cnt += mergesort(arr, mid + 1, e);

    cnt += merge(arr, s, e);

    return cnt;

}

int numberofinversions(vector<int>& arr) {
     // Reset count for each call
    return mergesort(arr, 0, arr.size() - 1);
    
}

int main() {
    vector<int> arr;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        arr.push_back(a);
    }

    int inversions = numberofinversions(arr);
    cout << inversions << endl; // Output the count of inversions

    return 0;
}
