#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> nums, vector<vector<int>>& ans, int index) {
    if (index == nums.size() - 1) {
        ans.push_back(nums);
        return;
    }

    for (int i = index; i < nums.size(); i++) {
        swap(nums[index], nums[i]);
        solve(nums, ans, index + 1);
        swap(nums[index], nums[i]);
    }
}

vector<vector<int>> permutation(vector<int>& nums) {
    vector<vector<int>> ans;
    solve(nums, ans, 0);
    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums;
    int a;
    for (int i = 0; i < n; i++) {
        cin >> a;
        nums.push_back(a);
    }

    vector<vector<int>> result = permutation(nums);

    // Print the result in the required format
    cout << "[";
    for (int i = 0; i < result.size(); i++) {
        cout << "[";
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j];
            if (j < result[i].size() - 1) {
                cout << ", ";
            }
        }
        cout << "]";
        if (i < result.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}
