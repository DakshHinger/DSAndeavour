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
  int n, q;
  cin >> n >> q;
  vector<int> v(n);
  int sum = 0, ev = 0, od = 0;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    sum += v[i];
    if (v[i] % 2 == 0) {
      ev++;
    } else {
      od++;
    }
  }
  for (int i = 0; i < q; i++) {
    int t, x;
    cin >> t >> x;
    if (t == 0 && x % 2 == 0) {
      sum += ev * x;
    } else if (t == 0 && x % 2 != 0) {
      sum += ev * x;
      od += ev;
      ev = 0;
    }
    if (t == 1) {
      sum += od * x;
      if (x % 2 != 0) {
        ev += od;
        od = 0;
      }
    }
    cout << sum << endl;
  }
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