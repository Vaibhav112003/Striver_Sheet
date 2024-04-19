#include<bits/stdc++.h>
using namespace std;

vector<long long> firstnegative(int arr[], int n, int k) {
    int i = 0, j = 0;
    deque<long long> deq;
    vector<long long> ans;

    while(j < n) {
        // If current element is negative, add it to the deque
        if(arr[j] < 0) {
            deq.push_back(arr[j]);
        }

        // If the window size is less than k, just move the window to the right
        if(j - i + 1 < k) {
            j++;
        } else if(j - i + 1 == k) { // When window size is k
            // If there are no negative numbers in the current window
            if(deq.empty()) {
                ans.push_back(0); // Add 0 to the result
            } else {
                ans.push_back(deq.front()); // Add the first negative number in the window to the result

                // If the element going out of the window is the same as the front of the deque, pop it
                if(arr[i] == deq.front()) {
                    deq.pop_front();
                }
            }
            // Slide the window
            i++;
            j++;
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;

    int nums[n];

    int k;
    cin >> k;

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<long long> res = firstnegative(nums, n, k);

    for(auto num : res) {
        cout << num << " ";
    }

    return 0;
}
