class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = 0, r = nums.size();

        int first = 1e9, last = 0;

        while (l <= r) {
            int m = l + (r - l) / 2;

            if (nums[m] == target) {
                first = min(first, m);
                last = max(last, m);
            }
            else if (nums[m] > target) {
                r = m - 1;
            }
            else {
                l = m + 1;
            }
        }

        if (first == 1e9) {
            first = -1;
        }

        if (last = 0) {
            if (nums[0] != target) {
                last = -1;
            }
        }

        vector<int> ans;

        ans.push_back(first);
        ans.push_back(last);

        return ans;
    }
};