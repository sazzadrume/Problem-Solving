class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans = 0;
        
        for(int i = 0; i < operations.size(); i++){
            string now = operations[i];
            
            if(now == "X++" || now == "++X"){
                ans++;
            }
            else{
                ans--;
            }
        }
        
        return ans;
    }
};