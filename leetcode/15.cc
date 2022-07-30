class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<int> v;

        vector<vector<int>> ans;

        set<vector<int>> st;

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                for (int k = j + 1; k < nums.size(); k++) {
                    if (nums[i] + nums[j] + nums[k] == 0) {
                        v.push_back(nums[i]);
                        v.push_back(nums[j]);
                        v.push_back(nums[k]);
                        sort(v.begin(), v.end());
                        st.insert(v);
                        v.clear();
                    }
                }
            }
        }

        for (auto& x : st) {
            ans.push_back(x);
        }

        return ans;
    }
};