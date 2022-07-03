class Solution {
public:
    bool isNumber(string s) {
        bool count = count(s.begin(), s.end(), '.');
        
        bool notValid = false;
        
        if(count){
            int signCounter = count(s.begin(), s.end(), '+'|'-');
            
            if(count(s.begin(), s.end(), '.') > 1){
                notValid = true;
            }
            else if(signCounter > 1 && s[0] != '+' && s[0] != '-'){
                notValid = true;
            }
            else if(s[0] == '.'){
                notValid = true;
            }
            else if(count(s.begin(), s.end(), 'e'|'E') > 0)
            else{
                for(int i = 1; i < s.size() - 1; i++){
                    if(s[i] == '.'){
                        if(s[i - 1] >= '0' && s[i - 1] <= '9'){
                            
                        }
                        else if(s[i - 1] == '-' || s[i - 1] == '+'){
                            
                        }
                        else{
                            notValid = true;
                        }
                    }
                }
            }
        }
    }
};
