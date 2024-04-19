#include<bits/stdc++.h>
using namespace std;
void row(int arr[100][100] , int i , int n){
    for(int j = 0; j<n; j++){
        arr[i][j] = -1;
    }
}
void cols(int arr[100][100] , int j , int n){
    for(int i = 0; i<n; i++){
        arr[i][j] = -1;

    }
}
void setzeroes(int arr[100][100], int n){
    
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
           if(arr[i][j] == 0){
            row(arr, i , n);
            cols(arr , j , n);
            }
        }
    }
   
    
}

int main(){

int n;
cin>>n;

int arr[100][100];

for(int i = 0; i<n; i++){
    for(int j = 0; j<n; j++){
        cin>>arr[i][j];
    }
}

setzeroes(arr, n);
for(int i = 0; i<n; i++){
    for(int j = 0; j<n; j++){
       if(arr[i][j] == -1){
        arr[i][j] = 0;
       }
    }
    
}
cout<<endl;

for(int i = 0; i<n; i++){
    for(int j = 0; j<n; j++){
       cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
    return 0;
}