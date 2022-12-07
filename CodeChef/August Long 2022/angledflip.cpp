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
  int n, m, x;
  cin >> n >> m;
  vector<int> a1, b1, a2, b2;
  if (n == 1 || m == 1) {
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        cin >> x;
        a1.push_back(x);
      }
    }
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        cin >> x;
        a2.push_back(x);
      }
    }
    if (a1 == a2)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
    return;
  }
  int two = 2;
  int array[n][m];
  while (two--) {
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        cin >> array[i][j];
      }
    }
    if (two == 1) {
      for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
          if ((i + j) % 2 == 0)
            a1.push_back(array[i][j]);
          else
            b1.push_back(array[i][j]);
        }
      }
    } else {
      for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
          if ((i + j) % 2 == 0)
            a2.push_back(array[i][j]);
          else
            b2.push_back(array[i][j]);
        }
      }
    }
  }

  // for (int i = 0; i < n; ++i) {
  //   for (int j = 0; j < m; ++j) {
  //     cin >> array[i][j];
  //   }
  // }
  // for (int i = 0; i < n; ++i) {
  //   for (int j = 0; j < m; ++j) {
  //     if ((i + j) % 2 == 0)
  //       a2.push_back(array[i][j]);
  //     else
  //       b2.push_back(array[i][j]);
  //   }
  // }
  vector<vector<int>> v;
  v.push_back(a1);
  v.push_back(b1);
  v.push_back(a2);
  v.push_back(b2);

  for (int i = 0; i < 4; i++) {
    sort(v[i].begin(), v[i].end());
  }

  // sort(a1.begin(), a1.end());
  // sort(b1.begin(), b1.end());
  // sort(a2.begin(), a2.end());
  // sort(b2.begin(), b2.end());
  if (v[0] == v[2] && v[1] == v[3])
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
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