class Solution {
public:
    int minOperations(vector<int>& nums) {
        int need = 0;
        
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] <= nums[i - 1]){
                need += (nums[i - 1] + 1 - nums[i]);
                nums[i] = nums[i - 1] + 1;
            }
        }
        return need;
    }
};