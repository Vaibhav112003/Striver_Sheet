#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threesum(int arr[], int n) {
    set<vector<int>> st;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { // Start from i+1 to avoid duplicate checks
            for (int k = j + 1; k < n; k++) { // Start from j+1 to avoid duplicate checks
                if (arr[i] + arr[j] + arr[k] == 0) {
                    vector<int> temp = {arr[i], arr[j], arr[k]};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<vector<int>> result = threesum(arr, n);

    for (auto &vec : result) { // Loop through each vector<int> in result
        for (int num : vec) { // Loop through each int in the vector<int>
            cout << num << " "; // Print the int followed by a space
        }
        cout << "\n"; // After printing all ints in a vector, print a newline
    }

    return 0;
}
