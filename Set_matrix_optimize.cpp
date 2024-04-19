#include<iostream>
using namespace std;
void setmatrix(int arr[100][100] , int n){

    int row[100];
    for(int i = 0; i<n; i++){
        row[i] = 0;
    }
    int cols[100];
    for(int i = 0; i<n; i++){
        cols[i] = 0;
    }

    for(int i = 0; i<n; i++){
    for(int j = 0; j<n; j++){
       if(arr[i][j] == 0){
        row[i] = 1;
        cols[j] = 1;
       }
    }
    }

    for(int i = 0; i<n; i++){
    for(int j = 0; j<n; j++){
        if(row[i] == 1 || cols[j] == 1){
            arr[i][j] = 0;
        }
    }
}
for(int i = 0; i<n; i++){
    for(int j = 0; j<n; j++){
       cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
}

int main(){


int n;
cin>>n;
int arr[100][100];

for(int i = 0; i<n; i++){
    for(int j = 0; j<n; j++){
       cin>>arr[i][j];
    }
    
}
setmatrix(arr , n);
    return 0;

}