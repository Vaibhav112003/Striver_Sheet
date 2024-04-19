#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;

while(n>0){
    string s;
    cin>>s;
    int l = s.size();
    int i = 0;
    int k = 0;
    int j = l-1;
    int cnt = 0;
    while(i<j){
    if(s[i] != s[j]){
        i++;
    }
    if(s[i] == s[j]){
        swap(s[i] , s[k]);  
        i++;
        k++;
        cnt++;

    }
    }
    cout<<cnt<<endl;
    n--;

}
    return 0;

}