#include<bits/stdc++.h>
using namespace std;

int longest(string s , int n) {
        
    int i = 0;
    int j = 0;
    int ans = 0;
    int cnt = 0;
    map<char , int>mp;

    while(j<n){
        mp[s[i]]++;
        

        if(mp.size() == j-i+1){
            ans = max(ans , j-i+1);
            j++;
        }
        else{
            while(mp.size() < j-i+1){
                mp[s[i]]--;
               
                if(mp[s[i]] == 0){
                    mp.erase(mp[s[i]]);
                }
                i++;
            }
        }
        j++;
    }
    return ans+1;
}
int main(){

int n;
cin>>n;

string s;
cin>>s;

cout<<longest(s , n);

    return 0;
}