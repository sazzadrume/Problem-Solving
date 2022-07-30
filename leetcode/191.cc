class Solution {
public:
    int hammingWeight(uint32_t n) {
        // string s = to_string(n);

        // cout << n << '\n';

        int bns = __builtin_popcount(n);

        // int ans = count(s.begin(), s.end(), '1');

        return bns;
    }
};