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
  string str[n];
  for (int i = 0; i < n; i++) {
    cin >> str[i];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j) {
        continue;
      }
      int size = str[j].size();
      if (str[i].size() <= size) {
        continue;
      }
      int found = str[i].find(str[j]);
      if (found == 0) {
        for (int k = 0; k < n; k++) {
          if (i == k) {
            continue;
          }
          int size2 = str[k].size();
          if (str[i].size() != size + size2) {
            continue;
          }
          int found2 = str[i].find(str[k], found + 1);
          if (found2 != string::npos) {
            if (str[i] == str[j] + str[k] || str[i] == str[k] + str[j]) {
              cout << 1;
              goto x;
            }
          }
        }
      }
    }
    cout << 0;
  x:
    int p = 0;
  }
  cout << endl;
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