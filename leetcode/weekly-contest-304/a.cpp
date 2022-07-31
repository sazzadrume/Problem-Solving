class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        set<int> s;

        for (auto& v : nums) {
            if (v > 0) {
                s.insert(v);
            }
        }

        return s.size();
    }
};