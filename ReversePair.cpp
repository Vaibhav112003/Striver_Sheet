#include<bits/stdc++.h>
using namespace std;

int reversepair(vector<int> arr, int n) {
    int cnt = 0;
    int i, j;

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > 2 * arr[j]) {
                cnt++;
            }
        }
    }

    return cnt;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        arr.push_back(a);
    }

    cout << reversepair(arr, n);

    return 0;
}
