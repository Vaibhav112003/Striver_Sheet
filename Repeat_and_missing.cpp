#include<bits/stdc++.h>
using namespace std;

int randm(int arr[] , int n){
    int repeating = -1;
    int missing = -1;
    for(int i = 1; i<n; i++){
        int cnt = 0;
        for(int j = 0; j<n; j++){
            if(arr[j] == i){
                cnt++;

            }
        }
        if(cnt == 2){
           repeating = i;
        }
        if(cnt == 0){
            missing = i;
        }
        if(repeating != -1 && missing != -1){
            break;
        }

    }

    cout<<repeating<<" ";

    return missing;
    
}

int main(){

int n;
cin>>n;

int arr[n];

for(int i = 0; i<n; i++){
    cin>>arr[i];
}
cout<<randm(arr , n);

    return 0;
}