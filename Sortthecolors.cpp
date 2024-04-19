#include<bits/stdc++.h>
using namespace std;

// void sortcolors(int Arr[100] , int n){

//     int cnt1 = 0;
//     int cnt2 = 0;
//     int cnt0 = 0;

//     for(int i = 0; i<n; i++){
//         if(Arr[i] == 0){
//             cnt0 = cnt0+1;
//         }
//         if(Arr[i] == 1){
//             cnt1 = cnt1+1;
//         }
//         if(Arr[i] == 2){
//             cnt2 = cnt2+1;
//         }
//     }
//     int i = 0;
//     while(cnt0 != 0){
        
//         cout<<0<<" ";
//         cnt0--;
//     }
//     int j = 0;
//     while(cnt1 != 0){
//         cout<<1<<" ";
//         cnt1= cnt1-1;
//     }
//     int k = 0;
//     while(cnt2 != 0){
//        cout<<2<<" ";
//         cnt2 = cnt2-1;
//     }
   
// }
void sortcolors(int arr[] , int n){

int low = 0;
int mid = 0;
int high = n-1;

    while(mid<=high){
        if(arr[mid] == 0){
             swap(arr[mid] , arr[low]);
             mid++;
             low++;
        }
        else if(arr[mid] == 1){
            //swap(arr[mid])
            mid++;
        }
        else if(arr[mid] == 2){
            swap(arr[mid] , arr[high]);
            high--;
            
            
        }
    }
}

int main(){

int n;
cin>>n;

int arr[100];

for(int i = 0; i<n; i++){
    cin>>arr[i];
}

sortcolors(arr, n);

for(int i = 0; i<n; i++){
    cout<<arr[i]<<" ";

}

  return 0;

}