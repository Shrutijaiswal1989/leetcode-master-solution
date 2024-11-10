class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
       int n = nums.size();
        int min_length = INT_MAX;
        deque<pair<int, int>> dq; // (index, prefix_or)

        int prefix_or = 0;

        for (int i = 0; i < n; ++i) {
            prefix_or |= nums[i]; // Update prefix OR

            // Remove elements from the front until prefix OR >= k
            while (!dq.empty() && dq.front().second < k)
                dq.pop_front();

            // Add current element's index and prefix OR to the deque
            dq.push_back({i, prefix_or});

            // If the prefix OR of the current window is at least k, update min_length
            while (!dq.empty() && dq.back().second >= k) {
                min_length = min(min_length, i - dq.front().first + 1);
                dq.pop_front(); // Shrink the window from the left
            }
        }

        return min_length != INT_MAX ? min_length : -1;
    }
};