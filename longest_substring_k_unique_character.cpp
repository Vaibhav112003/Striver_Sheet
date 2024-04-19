#include<bits/stdc++.h>
using namespace std;

int longestSubstring(string s, int n, int k) {
    unordered_map<char, int> mp;
    int i = 0;
    int j = 0;
    int maxi = INT_MIN; // Initialize to INT_MIN
    while (j < n) {
        mp[s[j]]++;

        if (mp.size() < k) {
            j++;
        } else if (mp.size() == k) {
            int cnt = j - i + 1;
            maxi = max(maxi, cnt);
            j++;
        } else {
            while (mp.size() > k) {
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

int main() {
    int n;
    cin >> n;
    int k;
    cin >> k;

    string s;
    cin >> s;

    cout << longestSubstring(s, n, k);

    return 0;
}
