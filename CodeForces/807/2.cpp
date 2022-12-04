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
  int sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    sum = sum + arr[i];
  }
  sum = sum - arr[n - 1];
  int flag = 0;
  int count0 = 0;
  for (int i = 0; i < n - 1; i++) {
    if (arr[i] != 0) {
      flag = 1;
    } else if (flag == 1 && arr[i] == 0) {
      count0++;
    }
  }
  int ans = sum + count0;
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