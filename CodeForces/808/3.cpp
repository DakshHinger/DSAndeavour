#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL)

const int mod = 1000000007;

string maxContest(vector<int> arr, int ind, int iq, string str) {
  if (ind == arr.size() - 1) {
    int n = arr.size() - 1;
    if (iq > 0) {
      return str + "1";
    } else {
      return str + "0";
    }
  }
  string take = "", notTake = "";
  if (iq >= arr[ind]) {
    take = maxContest(arr, ind + 1, iq, str + "1");
  } else {
    take = maxContest(arr, ind + 1, iq - 1, str + "1");
  }
  notTake = maxContest(arr, ind + 1, iq, str + "0");
  int t, n;
  for (int i = 0; i < take.size(); i++) {
    if (take[i] == '1') {
      t++;
    }
  }
  for (int i = 0; i < notTake.size(); i++) {
    if (notTake[i] == '1') {
      n++;
    }
  }
  if (t > n) {
    return take;
  } else {
    return notTake;
  }
}

void solve() {
  int n, q;
  cin >> n >> q;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  string ans = "";
  ans = maxContest(arr, 0, q, ans);
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







