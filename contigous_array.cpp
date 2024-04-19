#include<bits/stdc++.h>
using namespace std;

int contigousarray(int arr[] , int n){
    unordered_map<int , int>mp;
    int longest_subarray = 0;
    int sum = 0;

    for(int i = 0; i<n; i++){
        if(arr[i] == 0){
            sum = sum-1;
        }
        else{
            sum = sum+arr[i];
        }
        if(sum == 0){
            if(longest_subarray < i+1){
                longest_subarray = i+1;
            }
        }
        else if(mp.find(sum) != mp.end()){
            if(longest_subarray < i-mp[sum]){
                longest_subarray = i-mp[sum];
            }
        }
        else{
            mp[sum] = i;
        }
        
    }
    return longest_subarray;
}
int main(){

int n;
cin>>n;

int arr[100];

for(int i = 0; i<n; i++){
    cin>>arr[i];

}

cout<<contigousarray(arr , n);

    return 0;

}