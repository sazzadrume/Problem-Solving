class Solution {
public:
    int maxScore(vector<int>& v, int k) {
        
        int ans = 0, bns = 0, z = k;
        
        int l = 0, r = v.size() - 1;
        
        
        for(int i = 0; i < k; i++){
            if(v[l] > v[r]){
                ans += v[l];
                l++;
            }
            else{
                ans += v[r];
                r--;
            }
        }
        
        l = 0, r = v.size() - 1;
        
        
        for(int i = 0; i < z; i++){
            if(v[l] >= v[r]){
                bns += v[l];
                l++;
            }
            else{
                bns += v[r];
                r--;
            }
        }
        
        
        
//         while(k--){
//             int l = v.front();
//             int r = v.back();
            
//             if(l >= r){
//                 ans += v.back();
  
//                 vector<int>::iterator it;
//                 it = v.end();
//                 v.erase(it);
//             }
//             else{
//                 ans += v.front();
                
//                 vector<int>::iterator it;
//                 it = v.begin();
//                 v.erase(it);
//             }
//         }
        return max(ans, bns);
    }
};