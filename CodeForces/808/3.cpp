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
  int n, l, r;
  cin >> n >> l >> r;
  int x, y, e = 0;
  vector<int> a;
  for (int i = 0; i < n; i++) {

    x = l / (i + 1);
    y = r / (i + 1);
    if (x == y && l % (i + 1) != 0) {
      e = 1;
      break;
    } else if (x == y) {
      a.push_back(l);
    } else
      a.push_back(y * (i + 1));
  }
  if (e == 0) {
    cout << "YES" << endl;
    for (int i = 0; i < n; i++) {
      cout << a[i] << " ";
    }
    cout << endl;
  } else
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