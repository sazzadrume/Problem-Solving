class Solution {
public:
    int myAtoi(string s) {
        
        long long limit = 2147483647;
        
        string t = s;
        
        int counter = 0;
        
        for(int i = 0; i < t.size(); i++){
            if(t[i] == ' '){
                counter++;
            }
            else{
                break;
            }
        }
        
        s = t.substr(counter, t.size());
        
        char sign;
        
        int count = 0;
        
        if(s[0] == '-'){
            sign = '-';
            count = 1;
        }
        else if(s[0] == '+'){
            sign = '+';
            count = 1;
        }
        else{
            sign = '0';
        }
        
        int digits = 0;
        
        for(int i = count; i < s.size(); i++){
            if(s[i] >= '0' && s[i] <= '9'){
                digits++;
            }
            else{
                break;
            }
        }
        
        s = s.substr(count, digits);
        
        
        stringstream ss(s);
        
        long long num = 0;
        
        ss >> num;
        
        if(abs(num) > limit){
            num = limit;
            if(sign == '-'){
                num = limit + 1;
            }
            else{
                num = limit;
            }
        }
        
        if(sign == '-'){
            num *= -1;
        }
        
        return num;
    }
};