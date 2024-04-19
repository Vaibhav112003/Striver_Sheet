#include<bits/stdc++.h>
using namespace std;
vector<int> twosum(int arr[] , int n , int target){

    int i = 0;
    int j = n-1;
    while(j>i){
    int sum = arr[i]+arr[j];
    if(sum < target){
        i++;
    }
    if(sum > target){
        j--;
    }
    if(sum == target){
        return {i , j};
    }
    }
    return {-1,-1};

}
int main(){

int n;
cin>>n;

int arr[n];

for(int i = 0; i<n; i++){
     cin>>arr[i];

}
int target;
cin>>target;

vector<int>result = twosum(arr , n , target);

if(result[0] == -1){
    cout<<"PAir is Not Found"<<endl;
}
else{
    cout<<"["<<result[0]<<","<<result[1]<<"]"<<endl;
}

    return 0;

}