#include<bits/stdc++.h>
using namespace std;

void maximum(int arr[] , int n , int k){

    int i = 0;
    int j = 0;
    int maxi = INT_MIN;

    while(j<n){

        if(maxi < arr[j]){
            maxi = arr[j];
        }

        if(j-i+1 < k){
            j++;
        }

        if(j-i+1 == k){
            cout<<maxi<<" ";
            if
            i++;
            j++;
        }
    }
}
int main(){

int n;
cin>>n;
int k;
cin>>k;

int arr[n];

for(int i = 0;i<n; i++){
    cin>>arr[i];

}

maximum(arr , n , k);

    return 0;
}