#include<bits/stdc++.h>
using namespace std;
void printrow(int j){
    long long res = 1;
    cout<<res<<" ";
    for(int i = 1; i<j; i++){
        res = res*(j-i);
        res = res/i;

        cout<<res<<" ";
    }

    
}
int pascaltriangle(int n){
    for(int i = 1;i<=n; i++){
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