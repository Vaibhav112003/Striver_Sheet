#include<bits/stdc++.h>
using namespace std;

vector<int> randm(vector<int>&arr , int n){
    
    int hash[n+1] = {0};
    int repeating = -1;
    int missing = -1;
    for(int i = 0; i<n; i++){
        hash[arr[i]]++;
    }
    for(int i = 1;i<=n; i++){
        if(hash[i] == 2){
            repeating = i;
        }
        if(hash[i] == 0){
            missing = i;
        }
        if(repeating != -1 && missing != -1){
            break;
        }
    }
    

    return {repeating , missing};

}

int main(){

int n;
cin>>n;

vector<int> arr;

for(int i = 0; i<n; i++){
    int a;
    cin>>a;
    arr.push_back(a);
}

vector<int> result = randm(arr , n);

cout<<"repeating: "<<result[0]<<" missing: "<<result[1]<<endl;

    return 0;

}