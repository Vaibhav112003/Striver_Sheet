#include<bits/stdc++.h>
using namespace std;
int picktoys(string s){

    int i = 0;
    int j = 0;
    int maxi= 0;
    map<char , int>mp;

   while (j < s.length()) {
        mp[s[j]]++;

        if (mp.size() < 2) {
            j++;
        } else if (mp.size() == 2) {
            int cnt = j - i + 1;
            maxi = max(maxi, cnt);
            j++;
        } else {
            while (mp.size() > 2) {
                mp[s[i]]--;
                if (mp[s[i]] == 0) {
                    mp.erase(s[i]);
                }
                i++;
            }
            j++;
        }
    }
    // Check if maxi remained INT_MIN
    if (maxi == INT_MIN) return 0;
    return maxi;
}
int main(){

string s;
cin>>s;

cout<<picktoys(s);

    return 0;
}