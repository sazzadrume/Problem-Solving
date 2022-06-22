class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_water = 0;
        
        for(int i = 0; i < height.size() / 2 + 1; i++){
            for(int j = i + 1; j < height.size(); j++){
                max_water = max(max_water, (min(height[i], height[j]) * (j - i)));
            }
        }
        
        return max_water;
    }
};