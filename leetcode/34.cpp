class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = nums.size(), end = -1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                start = min(start, i);
                end = max(end, i);
            }
        }

        if (start == nums.size()) {
            start = -1;
        }

//         if(end == 0){
//             end = -1;
//         }


        vector<int> v;

        v.push_back(start);
        v.push_back(end);

        return v;
    }
};