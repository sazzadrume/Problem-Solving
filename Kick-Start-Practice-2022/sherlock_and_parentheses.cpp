#include <bits/stdc++.h>

using namespace std;

long long getMaximumBalancedSubstrings(long long L, long long R) {
  long long maximumBalancedSubstrings = 0;

  long long minimumBalancedSubstrings = min(L, R);

  if (minimumBalancedSubstrings > 0) {
    if (minimumBalancedSubstrings == 1) {
      maximumBalancedSubstrings = 1;
    }
    else {
      maximumBalancedSubstrings = (minimumBalancedSubstrings * (minimumBalancedSubstrings + 1)) / 2;
    }
  }

  return maximumBalancedSubstrings;
}

int main() {
  int T;
  // Get number of test cases
  cin >> T;
  for (int tc = 1; tc <= T; tc++) {
    long long L, R;
    cin >> L >> R;
    cout << "Case #" << tc << ": " << getMaximumBalancedSubstrings(L, R)
         << endl;
  }
  return 0;
}

// 3
// 1 0
// 1 1
// 3 2


// Case #1: 0
// Case #2: 1
// Case #3: 3
