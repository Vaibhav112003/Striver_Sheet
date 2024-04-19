#include<bits/stdc++.h>
using namespace std;
// int ncr(int n , int r){


//     long long  res = 1;
//     for(int i = 0; i<r; i++){
//         res = res*(n-i);
//         res = res/(i+1);
//     }

//     return res;
// }
// void printrow(int n){

//     for(int c = 1; c<=n; c++){
//         cout<<(ncr(n-1,c-1))<<" ";

//     }
// }
    void optimizesolution(int n){

    int res = 1;
    cout<<res<<" ";

    for(int i = 1; i<n; i++){

        res = res*(n-i);
        res = res/(i);

        cout<<res<<" ";
    }
    }

int main(){

int n;
cin>>n;

//printrow(n);
optimizesolution(n);

    return 0;

}