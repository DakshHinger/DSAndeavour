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
  map<string, int> mp;
  vector<string> str(n);
  for (int i = 0; i < n; i++) {
    cin >> str[i];
    mp[str[i]]++;
  }
  string ans;

  for (int j = 0; j < n; j++) {
    string s = str[j];
    int flag = 0;
    for (int i = 0; i < s.length() - 1; i++) {
      string s1 = s.substr(0, i + 1);
      string s2 = s.substr(i + 1, s.length() - i - 1);
      if (mp.find(s1) != mp.end() && mp.find(s2) != mp.end()) {
        ans.push_back('1');
        goto c;
      }
    }
    ans.push_back('0');
  c:
    int x;
  }
  cout << ans << endl;
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