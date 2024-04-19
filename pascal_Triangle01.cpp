/// Given Row and Column you have to tell the the value which is loacted on that row and column


#include<bits/stdc++.h>
using namespace std;

// int factorial(int n){

//     if(n==0){
//         return 1;
//     }


//     return n*factorial(n-1);
// }
// int pascaltriangle(int r , int c){
    
//     int p = r-1;
//     int Q = c-1;
//     int q1 = factorial(p);
    
//     int q2 = factorial(Q);
   
//     int q3 = factorial(p-Q);
    
//     int q4 = q2*q3;
//     int ans = q1/q4;


//     return ans;

// }
int optimizesolution(int n , int r){


    long long  res = 1;
    for(int i = 0; i<r; i++){
        res = res*(n-i);
        res = res/(i+1);
    }

    return res;
}
int main(){

int r, c;
cin>>r>>c;

//cout<<pascaltriangle(r,c);

cout<<optimizesolution(r-1 , c-1);



    return 0;


}