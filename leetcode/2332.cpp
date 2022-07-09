class Solution {
public:
    int latestTimeCatchTheBus(vector<int>& x, vector<int>& y, int c) {
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        
        int ans = 0;
        
        int tot = 0;
        
        vector<int> fine;
    
        
        for(int i = 0; i < x.size(); i++){
            int count = 0;
            for(int j = tot; j < y.size(); j++){
                // cout << "J : " << j << '\n'; 
                if(y[j] <= x[i] && count < c){
                    // cout << "P : " << 
                    
                    count++;
                    fine.push_back(y[j]);
                    tot++;
                    // cout << "Tot : " << tot << '\n';
                }
            }
        }
        
        int mx = *max_element(fine.begin(), fine.end());
        
        bool found = false;
        
        while(mx--){
            int cnt = count(fine.begin(), fine.end(), mx);
            
            if(cnt == 0){
                break;
            }
        }
        
        if(x.size() == 1){
            if(y.size() == 1){
                if(c == 1){
                    mx = 1;
                }
                else{
                    if(y[0] == x[0]){
                        mx = y[0] - 1;
                    }
                    else{
                        mx = x[0];
                    }
                    
                }
            }
            else{
                int cmt = 0;
            
                vector<int> v;

                for(int i = 0; i < c; i++){
                    if(y[i] <= x[0]){
                        // v.push_back(y[i]);
                        cmt++;
                    }
                }

                if(cmt < c){
                    mx = x[0];
                }
            }
            
        }
        
        // cout << "Pass : " << '\n';
        // for(auto& val : fine){
        //     cout << val << '\n';
        // }
        return mx;
    }
};