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
  int hr = 0, min = 0;
  cin >> hr >> min;
  vector<pair<int, int>> time(n, {-1, -1});

  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> time[i].first >> time[i].second;
  }
  sort(time.begin(), time.end());
  time.push_back({time[0].first + 24, time[0].second});

  //   int ind = lower_bound(h.begin(), h.end(), hr) - h.begin();
  int ind = 0;
  while (time[ind].first < hr && ind < n) {
    ind++;
  }

  while (time[ind].first <= hr && time[ind].second < min) {
    ind++;
  }
  int anshr = 0, ansmin = 0;
  if (time[ind].second < min) {
    ansmin = 60 + time[ind].second - min;
    anshr = time[ind].first - hr - 1;
    cout << anshr << " " << ansmin << endl;
  } else {
    cout << time[ind].first - hr << " " << time[ind].second - min << endl;
  }
}
//   else {
//     int anshr = 0, ansmin = 0;

//     int sthr = 24;
//     int stmin = 0;

//     if (stmin < min) {
//       ansmin = 60 + stmin - min + time[0].second;
//       anshr = sthr - hr - 1 + time[0].first;
//       cout << anshr << " " << ansmin << endl;
//     } else {
//       ansmin = time[0].second;
//       anshr = sthr - hr + time[0].first;
//       cout << anshr << " " << ansmin << endl;
//     }

// ansmin += time[0].second;
// anshr += time[0].first;
// cout << anshr << " " << ansmin << endl;
// }
// }
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