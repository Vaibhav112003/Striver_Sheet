#include<bits/stdc++.h>
using namespace std;
bool linearsearch(int arr[] , int c , int n){
    
    for(int i = 0; i<n; i++){
        if(arr[i] == c){
            return true;
        }
        
    
    
        
    }
    return false;
}
int lcn(int arr[] , int n){
    int longest = 1;
    for(int i = 0; i<n; i++){
        int cnt  = 1;
        int c = arr[i];

        while(linearsearch(arr , c+1 , n) == true){
            cout<<c<<endl;
            c++;
            cnt++;

        }
        longest = max(longest , cnt);

    }
    return longest;
}

int main(){


int n;
cin>>n;

int arr[n];

for(int i = 0; i<n; i++){
    cin>>arr[i];

}

int ans = lcn(arr,n);

cout<<ans;

    return 0;
}