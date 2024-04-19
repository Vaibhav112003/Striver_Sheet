#include <bits/stdc++.h>
using namespace std;

int maximum(string &s, int n) {
    int cnt = 0;
    int i = 0;
    int j = n - 1;
    vector<string> v;
    while (i <= j) {
        if (s[i] == s[j]) {
            v.push_back(string(1, s[i]));
            v.push_back(string(1,s[j])); // Convert char to string
            while (i < j && s[i] == s[i + 1]) {
                v.push_back(string(1, s[i + 1]));
                i++;
            }
            while (i < j && s[j] == s[j - 1]) {
                v.push_back(string(1, s[j - 1]));
                j--;
            }
        }
        i++;
        j--;
    }
    int size = n- v.size();
     
    return size;
}

int main() {
    int n;
    cin >> n;

    string s(n, ' '); // Initialize the string with size n

    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    cout << maximum(s, n);

    return 0;
}
