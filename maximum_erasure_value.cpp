#include<bit/stdc++.h>
using namespace std;

int maximumerasure(int arr[] , int n){
    int i = 0;
    int j = 0;
    unordered_map<int , int>mp;
    int sum = 0;
    while(j<n){
       
       if(mp.find(arr[j]) != mp.end()){
            sum = sum+arr[j];
            mp[arr[j]]++;
            j++;

        }
        else{
            sum = sum-arr[i];
        }

    }
}
int main(){

int n;
cin>>n;

int arr[n];

for(int i = 0; i<n; i++){
    cin>>arr[i];

}

maximumerasure(arr , n);



    return 0;

}