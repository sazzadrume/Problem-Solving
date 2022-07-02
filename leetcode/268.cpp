class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int counter = 0;
        
        int ans = 0;
        
        sort(nums.begin(), nums.end());
        
        if(nums[0] != 0){
            ans = 0;
        }
        else{
            for(int i = 0; i < n; i++){
                if(nums[i] != counter){
                    ans = counter;
                    break;
                }
                counter++;
            }
        }
        // cout << counter << '\n';
//         if(counter == n){
//             counter = n + 1;
//         }
        
        ans = counter;
        
        return ans;
    }
};
