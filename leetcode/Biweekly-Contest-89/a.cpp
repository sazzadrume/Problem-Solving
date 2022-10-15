class Solution {
public:
    int countTime(string s) {
        
        int h1 = 1, h2 = 1, m1 = 1, m2 = 1;
        
        if(s[0] == '?'){
            h1 = 3;
        }
        
        if(s[1] == '?' || s[1] > '3'){
            h1 = max(1, h1 - 1);
        }
        
        if(s[1] == '?'){
            if(s[0] == '2'){
                h2 = 4;
            }
            else if(s[0] == '1' || s[0] == '0'){
                h2 = 10;
            }
            else{
                h2 = 12;
            }
        }
        
        if(s[3] == '?'){
            m1 = 6;
        }
        
        if(s[4] == '?'){
            m2 = 10;
        }
        
        return h1 * h2 * m1 * m2;
    }
};