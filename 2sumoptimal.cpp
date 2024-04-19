#include<bits/stdc++.h>
using namespace std;

vector<int> twosum(int arr[] , int n , int target){
    map<int , int>mpp;

    for(int i = 0; i<n; i++){
        int num = arr[i];
        int more = target - num;
        if(mpp.find(more) != mpp.end()){
            return {mpp[more] , i};

        }
        mpp[num] = i;

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