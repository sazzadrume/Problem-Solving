class Solution {
public:
    vector<int> productQueries(int n, vector<vector<int>>& q) {
        
        
        
        vector<int> out;
        
        int x, y;
        
        for(int i = 0; i < q.size(); i++){
            int ans = 0, qq = 1;
            for(int j = 0; j < q[i].size(); j++){
                int now = q[i][j];
                
                if(j == 0){
                    x = now;
                }
                else{
                    y = now;
                }
                
                // cout << "Now : " << x << ' ' << y << '\n';
                
                if(j == 1){
                    while(pow(2, y) > n){
                        y--;
                    }
                    
                    for(int k = x; k <= y; k++){
                        ans = pow(2, k);
                        
                        // cout << "ANS : " << ans << '\n';
                        
                        qq *= ans;
                        
                        // cout << "QQ : " << qq << ' ' << k << '\n';
                    }
                    
                    qq = max(2, qq);
                    
                    out.push_back(qq);
                }
            }
            // out.push_back(ans);
        }
        
        return out;
    }
};