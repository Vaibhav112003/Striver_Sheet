// Print the pascal triangle awhen n is given 

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
// void pascaltriangle(int n){

//     for(int i = 1; i<=n; i++){
//         for(int j = 1; j<=i; j++){
//             cout<<ncr(i-1 , j-1)<<" ";

//         }
//         cout<<endl;
//     }

// }
void printrow(int j){
    long long res = 1;
    cout<<res<<" ";
    for(int i = 1; i<j; i++){
        res = res*(j-i);
        res = res/i;

        cout<<res<<" ";
    }

    
}
void pascaltriangle(int n){
    
    for(int i = 1; i<=n; i++){
         
    printrow(i);
    cout<<endl;
   
    }
}

int main(){


int n;
cin>>n;

pascaltriangle(n);
    return 0;


}