class Solution {
public:
    string largestOddNumber(string num) {
        string newNum = num;
        
        reverse(newNum.begin(), newNum.end());
        
        int counter = 0;
        
        for(int i = 0; i < newNum.size(); i++){
            if(newNum[i] % 2 != 0){
                counter = i;
                break;
            }
        }
        
        string ans = num.substr(0, num.size() - 1 - counter + 1);
        
        bool checker = false;
        
        for(char c : num){
            if(c % 2 != 0){
                checker = true;
                break;
            }
        }
        
        return checker ? ans : "";
    }
};