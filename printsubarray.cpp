#include<bits/stdc++.h>
using namespace std;

void printsubarray(vector<int>&arr,int n){

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-i; j++){
            for(int k = 0; k<=i+j; k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
}

int main(){

int n;
cin>>n;

vector<int>arr;
int a;
for(int i = 0;i<n; i++){
    cin>>a;
    arr.push_back(a);
}

printsubarray(arr , n);
    return 0;
}