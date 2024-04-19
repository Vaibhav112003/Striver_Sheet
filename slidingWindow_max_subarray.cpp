#include<bits/stdc++.h>
using namespace std;

int ksumarray(int arr[], int n, int k) {
    int i = 0;
    int j = 0;
    int sum = 0;
    int maxi = INT_MIN;
    while (j < n) {
        sum = sum + arr[j];

        if ((j - i + 1) < k) {
            j++;
        } else if ((j - i + 1) == k) {
            maxi = max(maxi, sum);
            sum = sum - arr[i];
            i++;
            j++;
        }
    }
    return maxi;
}

int main() {
   
    int n;
    cin>>n;
    
    int k;
    cin>>k;
   int arr[n];
   for(int i = 0; i<n;i++){
    cin>>arr[i];
    
   }
    cout<<ksumarray(arr, n, k);

    return 0;
}
