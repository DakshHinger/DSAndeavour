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
  int n;
  cin >> n;
  char c;
  cin >> c;
  string s;
  cin >> s;
  if (c == 'g') {
    cout << "0" << endl;
    return;
  }
  int maxi = -1;
  int count = 0;
  s += s;
  for (int i = 0; i < n; i++) {
    if (s[i] == c) {
      while (s[i] != 'g') {
        count++;
        i++;
      }
      maxi = max(maxi, count);
      count = 0;
    }
  }
  cout << maxi << endl;
}

int32_t main() {
  fastio();
  int testcase = 1;
  cin >> testcase;
  while (testcase--) {
    solve();
  }
  cout << endl;
  return 0;
}