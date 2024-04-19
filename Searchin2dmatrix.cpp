#include <iostream>
#include <vector>

using namespace std;

bool searchTarget(const vector<vector<int>>& arr, int n, int m, int target) {
    int s = 0;
    int e = n * m - 1; // Adjust end to point to the last valid index

    while (s <= e) {
        int mid = s + (e - s) / 2;
        int i = mid / m;
        int j = mid % m;

        if (arr[i][j] == target) {
            return true;
        } else if (arr[i][j] < target) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }

    return false;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m)); // Directly initialize 2D vector with size n x m

    int targetVal;
    cin >> targetVal;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    if(searchTarget(arr, n, m, targetVal) == true) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }

    return 0;
}
