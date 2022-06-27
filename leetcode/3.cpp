class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        set<int> st;
        
        int ans = 0;
        
        for(int i = 0; i < s.size(); i++){
            
            for(int k = i; k < s.size(); k++){
                
               if(checkUnique(s, i, k)){
                   ans = max(ans, k - i + 1);
               }
                // else{
                //     st.clear();
                // }
            }
            
        }
        
        // if(s.size() == 1){
        //     ans = 1;
        // }
        // else if(s.size() == 2){
        //     st.insert(s[0]);
        //     st.insert(s[1]);
        //     ans = st.size();
        // }
        
        return ans;
    }
    
    bool checkUnique(string s, int l, int r){
        vector<char> charArray(128);
                
        char ch;
        
        for(int i = l; i <= r ; i++){
            ch = s[i];
            
            charArray[ch]++;
            
            if(charArray[ch] > 1){
                return false;
            }
        }
        return true;
    }
        
};