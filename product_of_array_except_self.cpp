#include<bits/stdc++.h>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums , int n) {
        vector<int>left;
        if(n<1){
            return left;
        }
        int product = 1;

        for(int i = 0; i<n; ++i){
            product *= nums[i];
            left.push_back(product);

        }
        product = 1;
        for(int i = n-1;i>0; --i){
            left[i] = left[i-1]*product;
            product *= nums[i];

        }
        left[0] = product;

        return left;
}
int main(){

vector<int>arr;
int n;
cin>>n;

for(int i = 0; i<n; i++){
    int a;
    cin>>a;
    arr.push_back(a);
}
vector<int>result = productExceptSelf(arr , n);

for(auto &num:result){
    cout<<num<<" ";

}

return 0;
}