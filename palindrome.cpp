#include<bits/stdc++.h>
using namespace std;
bool palindrome(int arr[] , int n){

    stack<int>st;
    queue<int>que;
 
    for(int i = 0;i<n; i++){
        st.push(arr[i]);

    }
    
    for(int i = 0;i<n; i++){
        que.push(arr[i]);

    }
    
       while(!st.empty() && !que.empty()){
        cout<<st.top()<<"st-"<<endl;
        cout<<que.front()<<"QUE-"<<endl;
        if(st.top() != que.front()){
            return false;
        }
        st.pop();
        que.pop();
       }

    return true;
}
int main(){

int n;
cin>>n;
int arr[n];

for(int i = 0; i<n; i++){
    cin>>arr[i];
}

if(palindrome(arr , n)){
    cout<<"TRUE"<<endl;
}
else{
    cout<<"FALSE"<<endl;
}


    return 0;
}