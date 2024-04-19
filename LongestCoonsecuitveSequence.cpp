#include<bits/stdc++.h>
using namespace std;

int lcs(int arr[] , int n){

    sort(arr, arr+n);
    int longest = 1;
    int cnt = 0;
    int small = INT_MIN;
    for(int i = 0; i<n; i++){
     
      

      if(arr[i]-1 == small){
        small = arr[i];
        cnt++;
      }
      if(arr[i] != small){
        small = arr[i];
        cnt = 1;
      }
      longest = max(longest , cnt);
    }

    return longest;
}

int main(){

int n;
cin>>n;

int arr[n];

for(int i = 0; i<n; i++){
    cin>>arr[i];

}

int ans = lcs(arr , n);
cout<<ans<<endl;
    return 0;
}