#include<bits/stdc++.h>
using namespace std;

// int maxsubarray(int arr[] , int n){
  
//     int maxi = INT_MIN;
//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<n-i; j++){
//               int sum = 0; 
//             for(int k = 0; k<= i+j; k++){
//                 sum = sum + arr[k];
//                 maxi = max(sum , maxi);
//             }
            

//         }
//     }
//     return maxi;
// }

// Kedans Algorithm 

int maxsubarray(int arr[] , int n){
    int sum = 0;
    int maxi = arr[0];
for(int i = 0; i<n; i++){
    sum = sum + arr[i];
    maxi = max(maxi , sum);

    if(sum < 0){
        sum = 0;

    }

}
return maxi;
}


int main(){

int n;
cin>>n;

int arr[100];

for(int i = 0; i<n; i++){
    cin>>arr[i];

}

cout<<maxsubarray(arr , n);

    return 0;
}