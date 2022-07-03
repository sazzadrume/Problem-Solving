class Solution {
public:
    int reverse(int x) {
        long long nax = 2147483647;
        
        string s = to_string(x);
        
        // cout << s << '\n';
        
        string ans = "";
        
        if(s[0] == '-'){
            ans += '-';
            
            ::reverse(s.begin(), s.end());
            
            // cout << s << '\n';
            
            int counter = 0;
            
            for(int i = 0; i < s.size(); i++){
                if(s[i] == '0'){
                    counter++;
                }
                else{
                    break;
                }
            }
            
            string sub = s.substr(counter, s.size() - 1);
            
            ans += sub;
        }
        else{
            ::reverse(s.begin(), s.end());
            
            int counter = 0;
            
            for(int i = 0; i < s.size(); i++){
                if(s[i] == '0'){
                    counter++;
                }
                else{
                    break;
                }
            }
            
            string sub = s.substr(counter, s.size());
            
            ans += sub;
        }
        
        // if(ans > limit){
        //     ans = "0";
        // }
        
        
        stringstream ret(ans);
        
        int f = 0;
        ret >> f;
        
        if(abs(f) >= nax){
            f = 0;
        }
                
        return f;
    }
};