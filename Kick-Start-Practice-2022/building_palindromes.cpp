#include <bits/stdc++.h>

using namespace std;

bool canFormPalindrome(string str)
{
  int count[256] = { 0 };

  for (int i = 0; str[i]; i++)
    count[str[i]]++;

  int odd = 0;
  for (int i = 0; i < 256; i++) {
    if (count[i] & 1)
      odd++;

    if (odd > 1)
      return false;
  }
  return true;
}

int main() {
  int T;
  // Get number of test cases
  cin >> T;
  for (int tc = 1; tc <= T; tc++) {
    int N, Q;
    // Get number of blocks and number of questions
    cin >> N >> Q;

    string blockCharacters;
    // Get the string representing the characters on the blocks
    cin >> blockCharacters;

    std::map<string, bool> mp;

    for (int i = 0; i < blockCharacters.size(); ++i)
    {
      string t = "";
      for (int j = i; j < blockCharacters.size(); ++j)
      {
        t += blockCharacters[j];

        string x = to_string(i);
        string y = to_string(j);

        mp.insert({x + y, canFormPalindrome(t)});
      }
    }

    int ans = 0;

    for (int i = 0; i < Q; i++) {
      int L, R;
      cin >> L >> R;

      L--;
      R--;

      string x = to_string(L);
      string y = to_string(R);

      auto it = mp.find(x + y);


      // R--;

      // string empty = "";

      // // for (int j = L; i < R; j++)
      // // {
      // //   cout << blockCharacters[j];
      // //   empty += blockCharacters[j];
      // // }

      // empty = blockCharacters.substr(L, R - L);


      if (it->second == true) {
        ans++;
      }
      // set<char> st;

      // for (char c : empty) {
      //   st.insert(c);
      // }

      // if (empty.size() == 1) {
      //   ans++;
      // }
      // else if (empty.size() % 2 != 0) {
      //   if (st.size() <= (empty.size() / 2 + 1)) {
      //     ans++;
      //   }
      // }
      // else {
      //   if (st.size() <= (empty.size() / 2)) {
      //     ans++;
      //   }
      // }
      // cout << empty << '\n';

      // string empty_clone = empty;

      // reverse(empty_clone.begin(), empty_clone.end());

      // if (empty == empty_clone) {
      //   ans++;
      // }
    }

    cout << "Case #" << tc << ": "
         << ans << endl;
  }
  return 0;
}