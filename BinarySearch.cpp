#include<bits/stdc++.h>
using namespace std;

bool binarysearch(vector<int> &arr, int target) {
    int s = 0;
    int e = arr.size() - 1;

    while (s <= e) {
        int mid = s + (e - s) / 2; // Prevent potential overflow
        if (arr[mid] == target) {
            return true;
        } else if (arr[mid] > target) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    int target;
    cin >> target;

    vector<int> arr(n); // Resize the vector to hold n elements

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (binarysearch(arr, target)) {
        cout << "true" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
