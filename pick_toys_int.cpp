#include<bits/stdc++.h>
using namespace std;
int picktoys(int s[] , int n){

    int i = 0;
    int j = 0;
    int maxi= 0;
    map<int , int>mp;

   while (j < n) {
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

int n;
cin>>n;

int arr[n];

for(int i = 0; i<n; i++){
    cin>>arr[i];
}

cout<<picktoys(arr , n);

    return 0;
}