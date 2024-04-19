#include <iostream>
using namespace std;

int longestsubarray(int arr[], int n, int k) {
    int i = 0;
    int j = 0;
    int sum = 0;
    int maxi = 0;

    while (j < n) {
        sum += arr[j];

        if (sum <= k) {
            maxi = max(maxi, j - i + 1);
            j++;
        } else {
            while (sum > k && i <= j) {
                sum -= arr[i];
                i++;
            }
            j++;
        }
    }
    return maxi;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    int k;
    cin >> k;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << longestsubarray(arr, n, k);

    return 0;
}
