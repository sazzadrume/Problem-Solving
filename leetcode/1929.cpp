class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> v;
        
        for(int value : nums){
            v.push_back(value);
        }
        
        for(int value : nums){
            v.push_back(value);
        }
        
        return v;
    }
};