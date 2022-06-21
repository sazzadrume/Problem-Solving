class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int start = nums.size(), end = -1;

        int l = 0, r = nums.size() - 1;

        while (l <= r) {
            int mid = (l + r) + 1 / 2;

            if (nums[mid] == target) {
                start = min(start, mid);
                end = max(end, mid);
            }
            if (nums[mid] < target) {
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }

        if (start == nums.size()) {
            start = -1;
        }

        vector<int> v;

        v.push_back(start);
        v.push_back(end);

        return v;
    }
};