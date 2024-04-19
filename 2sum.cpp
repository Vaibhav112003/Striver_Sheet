#include <bits/stdc++.h>
using namespace std;

void twosum(int arr[], int n, int target) {
    
    for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] + arr[j] == target) {
                    cout<<"["<<i<<","<<j<<"]"; // Corrected syntax here
                }
            }
        }
    
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    twosum(arr, n, target);

    return 0;
}
