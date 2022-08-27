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
  int n, x;
  cin >> n >> x;
  int arr[2 * n];
  for (int i = 0; i < 2 * n; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + 2 * n);
  int flag = 0;
  for (int i = 0; i < n; i++) {
    if (arr[n + i] - arr[i] < x) {
      flag = 1;
      cout << "NO" << endl;
      break;
    }
  }
  if (flag == 0) {
    cout << "YES" << endl;
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