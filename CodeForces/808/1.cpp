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
  int arr[n];
  int flag0 = 0;
  for (int i = 1; i <= n; i++) {
    cin >> arr[i];
    if (n > 2 && i > 1 && arr[i] == 0) {
      flag0 = 1;
    }
  }
  if (flag0) {
    cout << "NO" << endl;
    return;
  }
  if (arr[1] == 0) {
    cout << "NO" << endl;
    return;
  }
  if (arr[1] == 1) {
    cout << "YES" << endl;
    return;
  }
  int ff = arr[1];
  int flag = 0;
  for (int i = 1; i <= n; i++) {
    if (arr[i] % ff != 0) {
      flag = 1;
      break;
    }
  }
  if (flag) {
    cout << "NO" << endl;
    return;
  }
  cout << "YES" << endl;
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