#include <iostream>
#include <climits>
using namespace std;

int slidingwindow(int arr[], int n, int k) {
    int i = 0;
    int j = 0;
    int maxi = INT_MIN;
    int sum = 0;

    while (j < n) {
        sum += arr[j];

        if (sum < k) {
            j++;
        } else if (sum == k) {
            int len = j - i + 1;
            maxi = max(maxi, len);
            sum -= arr[i];
            i++;
            j++;
        } else {
            while (sum > k && i <= j) {
                sum -= arr[i];
                i++;
            }
           
        }
    }
    return (maxi == INT_MIN) ? 0 : maxi; // Handle case where no subarray with sum=k found
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

    cout << slidingwindow(arr, n, k);

    return 0;
}
