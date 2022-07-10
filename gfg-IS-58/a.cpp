class Solution{
public:
    int maxInstance(string s){
        int b = 0, a = 0, l = 0, o = 0, n = 0;
        
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'b'){
                b++;
            }
            else if(s[i] == 'a'){
                a++;
            }
            else if(s[i] == 'l'){
                l++;
            }
            else if(s[i] == 'o'){
                o++;
            }
            else if(s[i] == 'n'){
                n++;
            }
        }
        
        l /= 2;
        o /= 2;
        
        int ans = min(b, min(a, min(l, min(o, n))));
        
        return ans;
    }
};