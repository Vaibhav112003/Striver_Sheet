#include <vector>
#include <string>
#include <unordered_map>
#include <iostream>
using namespace std;

int findAnagrams(string s, string p) {
    int cntt = 0;
    int k = p.length();
    std::unordered_map<char, int> map;

    // Initial map population with characters from p
    for (int i = 0; i < k; ++i) {
        char ch = p[i];
        map[ch]++;
    }

    int count = map.size();
    int i = 0, j = 0;

    while (j < s.length()) {
        // Calculation part
        char ch = s[j];
        if (map.find(ch) != map.end()) {
            map[ch]--;
            if (map[ch] == 0) {
                count--;
            }
        }

        // Window size is smaller than k
        if (j - i + 1 < k) {
            j++;
        } 
        // Window size equals k
        else if (j - i + 1 == k) {
            if (count == 0) {
                cntt++;
            }
            char ch1 = s[i];
            if (map.find(ch1) != map.end()) {
                map[ch1]++;
                if (map[ch1] == 1) {
                    count++;
                }
            }
            i++;
            j++;
        }
    }

    return cntt;
}
int main(){


string s;
cin>>s;
string p;
cin>>p;

cout<<findAnagrams(s , p);

    return 0;
}