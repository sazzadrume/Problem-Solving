class Solution {
public:
    int maximumGroups(vector<int>& grades) {

        int ans = 0, cnt = 1;

        sort(grades.begin(), grades.end());

        int val = grades[grades.size() - 1];

        for (int i = 0; i < grades.size() - 1; i++) {
            if (ans <= val) {
                cout << "ans : " << ans << ' '  << "val : " << val << '\n';
                ans += grades[i];
            }
            else {
                // cout << "val : " << val << '\n';
                val = ans;
                ans = grades[i];
                cnt++;
            }
        }

        cout << "Out ans : " << ans << ' '  << "val : " << val << '\n';
        if (ans > val) {
            cnt++;
        }

        // cout << "Outside : " << val << '\n';
//         set<int> st;

//         int ans = 0, cnt = 0, cns = 0;

//         int mx = *max_element(grades.begin(), grades.end());

//         for(auto& val : grades){
//             st.insert(val);
//             cns += val;
//         }

//         for(auto& sval : st){
//             ans += sval;
//         }

//         cout << ans << '\n';

//         int ret = ans / mx;

//         int bns = 0;

//         while(ans > 0){
//             ans -= mx;
//             mx++;
//             cnt++;
//         }





//         int ans = 0;

//         int p = 0;

//         int cnt = 0;

//         for(int i = 0; i < grades.size(); i++){
//             if(grades[i] > p){
//                 ans += grades[i];

//                 while(ans < p){
//                     ans += grades[i];
//                     i++;
//                 }
//                 cnt++;
//                 p = ans;
//             }
//         }



        return cnt;
    }
};