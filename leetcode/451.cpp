class Solution {
public:
    string frequencySort(string s) {
        
        map<char, int> mp;
        
        for(char a = 'a'; a <= 'z'; a++){
            int cnt = 0;
            for(int j = 0; j < s.size(); j++){
                if(s[j] == a){
                    cnt++;
                }
            }
            mp.insert({a, cnt});
        }
        
        sort(mp);
        
        string ans;
        
        for(auto& v : mp){
            int len = v.second;
            for(int i = 0; i < len; i++){
                ans += v.first;
            }
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
        
    }
    
    bool cmp(pair<char, int>& a,
             pair<char, int>& b)
    {
        return a.second < b.second;
    }

    void sort(map<char, int>& M)
    {

        vector<pair<char, int>> A;

        for (auto& it : M) {
            A.push_back(it);
        }

        sort(A.begin(), A.end(), cmp);

//         for (auto& it : A) {

//             cout << it.first << ' '
//                  << it.second << endl;
//         }
    }
};