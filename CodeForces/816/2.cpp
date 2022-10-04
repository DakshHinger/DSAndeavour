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
  int n, k, b, s;
  cin >> n >> k >> b >> s;
  int mini = 0, maxi = 0;
  mini = s - (n - 1) * (k - 1);
  mini /= k;
  maxi = s / k;
  if (s == 0 && b == 0) {
    for (int i = 0; i < n; i++) {
      cout << 0 << " ";
    }
    cout << endl;
    return;
  }
  //   cout << "78686";
  if (mini <= b && b <= maxi) {
    vector<int> v;
    int mul = min(b * k, 100000007ll);
    ;
    // mul = min(mul, 100000007ll);
    // int yoo = min(mul, 8LL);

    if (mul > s) {
      cout << "-1" << endl;
      return;
    }
    v.push_back(mul);
    s -= mul;
    int p = s / (k - 1);
    int r = s % (k - 1);

    for (int i = 0; i < p; i++) {
      v.push_back(k - 1);
    }

    v.push_back(r);
    for (int i = v.size(); i < n; i++) {
      v.push_back(0);
    }

    for (int i = 0; i < v.size(); i++) {
      cout << v[i] << " ";
    }

    cout << endl;
  } else {
    cout << -1 << endl;
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