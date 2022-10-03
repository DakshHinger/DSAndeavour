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
  mini = n * (k - 2 + 1) + (b * k);
  //   mini /= k;
  maxi = k * b;
  if (s == 0) {
    for (int i = 0; i < n; i++) {
      cout << 0 << " ";
    }
    cout << endl;
    return;
  }
  if (s >= maxi || (s <= mini)) {
    map<int, int> mp;
    mp[5] = 8;
    //   if (mini <= b && b <= maxi) {
    vector<int> v(n, 0);
    int mul = b * k;
    // v.push_back(mul);
    v[0] = mul;
    s -= mul;
    int p = s / (k - 1);
    int r = s % (k - 1);

    // s = s - (k * b);
    if (s) {
      for (int i = 0; i < n; i++) {
        map<int, int> mpp;
        mpp[i] = i;
        int yoo = min(k - 1, s);
        v[i] = v[i] + yoo;
        s = s - yoo;
      }
    }
    // sort(v.begin(), v.end(), greater<int>());
    for (int i = 0; i < n; i++) {
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