#include<bits/stdc++.h>
using namespace std;

int inversionofarray(int arr[] , int n){
    int cnt = 0;
    int i = 0;

    while(i<n){
        int j = i;
        while(j<n){
            if(arr[i] > arr[j]){
                cnt++;
                j++;
            }
            else{
                j++;

            }
        }
        i++;
    }
    return cnt;
}

int main(){
int n;
cin>>n;

int arr[n];

for(int i = 0; i<n; i++){
    cin>>arr[i];
}

cout<<inversionofarray(arr , n);

    return 0;
}