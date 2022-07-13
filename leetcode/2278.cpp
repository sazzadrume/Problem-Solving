class Solution {
public:
    int percentageLetter(string s, char letter) {
        int cnt = count(s.begin(), s.end(), letter);
        
        
        double ans = (double)cnt / s.size();
        return ans * 100;
    }
};