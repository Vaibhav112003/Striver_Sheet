#include<bits/stdc++.h>
using namespace std;

void nextpermutation(int arr[] , int n){

    int index = -1;
    for(int i = n-2; i>=0; i--){
        if(arr[i] < arr[i+1]){
            index = i;
            break;
        }
    }
    if(index = -1){
        reverse(arr.begin() , arr.end());

    }
    for(int i = n-1; i<=0; i++){
        if(arr[index] < arr[i]){
            swap(arr[index] , arr[i]);

        }
    }

    reverse(arr.begin()+index+1 , arr.end());

}
int main(){

int n;
cin>>n;

int arr[n];

for(int i = 0; i<n; i++){
    cin>>arr[i];

}

nextpermutation(arr , n);

for(int i = 0; i<n; i++){
    cout<<arr[i]<<" ";

}
    return 0;
}