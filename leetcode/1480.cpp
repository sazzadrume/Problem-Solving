class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        
        int value = 0;
        
        for(int i = 0; i < nums.size(); i++){
            value += nums[i];
            ans.push_back(value);
        }
        return ans;
    }
};