#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL)

const int mod = 1000000007;

string rec(int i, vector<int> &a, int q) {
  if (q == 0 || i == a.size())
    return "0";
  // choose to take i
  string take = "";
  if (a[i] > q) {
    take = "1" + rec(i + 1, a, q - 1);
  } else {
    take = "1" + rec(i + 1, a, q);
  }
  string nottake = rec(i + 1, a, q);
  return max(take, nottake);
}

void solve() {
  int n, q;
  cin >> n >> q;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  string ans = "";

  ans = rec(0, arr, q);
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