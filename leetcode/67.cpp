class Solution {
public:
    string addBinary(string a, string b) {
        int x = a.size();
        int y = b.size();
        
        string s = "";
        
        if(x > y){
            for(int i = 0; i < x - y; i++){
                if(a[i] == b[i]){
                    if(a[i] == '0'){
                        s += '1';
                    }
                    else{
                        s += '0';
                    }
                }
                else{
                    s += '1';
                }
            }
            
            // cout << s << '\n';
        
            for(int i = x - y; i < x; i++){
                if(a[i] == '1'){
                    // cout << a[i] << '\n';
                    s += '0';
                }
                else{
                    s += '1';
                }
            }
            
            // cout << s << '\n';
            
            reverse(s.begin(), s.end());

            s = '1' + s;
        }
        else if(x == y){
            // cout << "Empty : " << s << '\n';
            for(int i = 0; i < y; i++){
                if(b[i] == a[i]){
                    if(b[i] == '0'){
                        s += '1';
                    }
                    else{
                        s += '0';
                    }
                    // 1010
                    // 1011
                    // 0101
                }
                else{
                    s += '1';
                }
            }
            
            // cout << "Sorry " <<  s << '\n';
        
            // for(int i = y - x; i < y; i++){
            //     if(b[i] == '1'){
            //         s += '0';
            //     }
            //     else{
            //         s += '1';
            //     }
            // }
            // reverse(s.begin(), s.end());

            s = '1' + s; 
            
            // cout << "After : " << s << '\n';
        }
        else{
            for(int i = 0; i < y - x; i++){
                if(a[i] == b[i]){
                    if(a[i] == '0'){
                        s += '1';
                    }
                    else{
                        s += '0';
                    }
                }
                else{
                    s += '1';
                }
            }

            // cout << s << '\n';

            for(int i = y - x; i < y; i++){
                if(a[i] == '1'){
                    // cout << a[i] << '\n';
                    s += '0';
                }
                else{
                    s += '1';
                }
            }

            // cout << s << '\n';

            reverse(s.begin(), s.end());

            s = '1' + s;
        }
        
        if(x == y && x == 1){
            if(a == b){
                s = '0';
            }
            else{
                s = '1';
            }
        }
        
        return s;
    }
};