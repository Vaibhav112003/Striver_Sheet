#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>threesum(int arr[] , int n){

    set<vector<int>>st;
    for(int i = 0; i<n; i++){
        set<int>hashset;
        for(int j = i+1; j<n; i++){
           int third   = -(arr[i] + arr[j]);
           if(hashset.find(third) != hashset.end()){
            vector<int>temp = {arr[i] , arr[j] , third};
            sort(temp.begin() , temp.end());
            st.insert(temp);

           }
           hashset.insert(arr[j]);
        }
    }
    vector<vector<int>> ans(st.begin() , st.end());

    return ans;
}

int main(){

int n;
cin>>n;

int arr[n];

for(int i = 0; i<n; i++){
    cin>>arr[i];
}

vector<vector<int>>result = threesum(arr , n);

for(auto &vec:result){
    for(int num: vec){
        cout<<num<<" ";

    }
    cout<<"\n";
}



    return 0;
}