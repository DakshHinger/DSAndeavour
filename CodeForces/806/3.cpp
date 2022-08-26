#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL)

const int mod = 1000000007;

int num(int ind, int up) {
  int ans = ind + up;
  ans %= 10;
  return ans;
}

void solve() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++) {
    int size;
    cin >> size;
    string operation;
    cin >> operation;
    int up = 0;
    for (int i = 0; i < size; i++) {
      if (operation[i] == 'D') {
        up++;
      } else {
        up--;
      }
    }
    up += 100;
    up = up % 10;
    arr[i] = num(arr[i], up);
  }
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
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