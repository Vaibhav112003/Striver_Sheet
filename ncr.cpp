#include<bits/stdc++.h>
using namespace std;

int ncr(int n , int r){
    
    n = n+r-2;
    r = r-1;
    double res = 1;

    for(int i = 0; i<=r; i++){
        res = res*(n-r+i)/i;

    }

    return (int)res;
}

int main(){

int n;
cin>>n;
int r
cin>>r;

cout<<ncr(n , r);


    return 0;

}