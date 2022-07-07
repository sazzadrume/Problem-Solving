class Solution {
public:
    vector<int> plusOne(vector<int>& arr) {
        int n = arr.size();
        
        int cnt = count(arr.begin(), arr.end(), 9);
        
        
        if(n == 1){
            if(arr[n - 1] < 9){
                arr[n - 1] += 1;
            }
            else{
                arr.pop_back();
                arr.push_back(1);
                arr.push_back(0);
            }
        }
        else{
            if(arr[n - 1] < 9){
                arr[n - 1] += 1;
            }
            else{
               arr[n - 1] = 0;
            
                bool foundNine = false;

                for(int i = n - 2; i >= 0; i--){
                    if(arr[i] == 9){
                        arr[i] = 0;
                        foundNine = true;
                    }
                    else{
                        arr[i] += 1;
                        break;
                    }
                }
                
                
                
               

                if(cnt == n){
                    arr.insert(arr.begin(), 1);
                }
                
//                 cout << cnt << '\n';
                
//                  for(auto& val : arr){
//                     cout << val << '\n';
//                 }

                // reverse(arr.begin(), arr.end()); 
            }
            
        }
        return arr;
    }
};

//99
//89
