#include<bits/stdc++.h>
using namespace std;

int longestsubarray(int arr[] , int k , int n){
    int i = 0;
    int j = 0;
    int sum = 0;
    int cnt = 0;
    int maxi = INT_MIN;
    if(maxi < n){
        return 0;
    }
    while(j<n){
        sum = sum + arr[j];

        if(sum < k){
            j++;
        }
        else if(sum == k){
            cnt = j-i+1;
            maxi = max(maxi , cnt);
            sum = sum - arr[i];
            i++;
            j++;

        }
        else{
            while(sum > k){
                sum = sum - arr[i];
                i++;
            }
        }
    }

    return maxi;
}
int  main(){

int n;
cin>>n;

int arr[n];
int k;
cin>>k;

for(int i = 0; i<n; i++){
    cin>>arr[i];
}

cout<<longestsubarray(arr , k , n);

    return 0;
}