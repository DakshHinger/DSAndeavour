#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL)

const int mod = 1000000007;

void solve() {
  string s = "01001001101";
  int n = s.length();
  int ans = 0;
  int i;
  for (i = n - 1; i > 0; i--) {
    if (s[i - 1] - '0' != 1 - s[i] + '0') {
      break;
    }
  }

  int j = 0;
  if (s[0]- '0' == 1 - s[n - 1]+ '0') {
    for (j = 0; j < n; j++) {
      if (s[j + 1] - '0' != 1 - s[j] +'0') {
        break;
      }
    }
      j++;
  }

  for (int k = i; k > j ; k--) {
    if (s[k - 1] - '0' != 1 - s[k] + '0') {
      ans++;
      s[k - 1] = char(1 - s[k] + '0' + '0');
    }
  }
  cout << ans;
}

int32_t main() {
  fastio();
  int testcase = 1;
  // cin >> testcase;
  while (testcase--) {
    solve();
  }
  cout << endl;
  return 0;
}