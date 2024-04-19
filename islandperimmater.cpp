#include<bits/stdc++.h>
using namespace std;
int checkarea(int arr[100][100] , int i , int j , int cnt){
    if(arr[i][j] == arr[i-1][j] && arr[i-1][j] == arr[i][j-1]){
        cnt = cnt + 8;
        
    }
    else if(arr[i][j] == arr[i][j-1]){
        cnt = cnt+6;
    }
    else if(arr[i][j] == arr[i-1][j]){
        cnt = cnt + 6;
    }
    else{
        cnt = cnt + 4;
    }

    return cnt;
}
int islandperimeter(int arr[100][100] , int n , int m){
    int cnt = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(arr[i][j] == 1){
                checkarea(arr , i , j , cnt);
            }
        }
    }

    return cnt;
}
int main(){

int n;
cin>>n;
int m;
cin>>m;

int arr[100][100];

for(int i = 0; i<n; i++){
    for(int j = 0; j<m; j++){
        cin>>arr[i][j];
    }
}

cout<<islandperimeter(arr , n , m);

    return 0;
}