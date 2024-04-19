#include<bits/stdc++.h>
using namespace std;
int maxx(int arr[] , int n){
  map<int , int>m;
  int c = 0;
  int max  = 0;
    for(int i = 0; i<n; i++){
       m[arr[i]]++;

       if(m[arr[i]] > max){
        max = m[arr[i]];
        c = 0;

        }
        if(m[arr[i]]==max){
            c++;
        }
    }
    return c*max;
}
int main(){

int n;
cin>>n;

int arr[n];

for(int i = 0; i<n; i++){
   
    cin>>arr[i];

}

cout<<maxx(arr , n);

    return 0;
}