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
  int n, x, y;
  cin >> n >> x >> y;
  multiset<int> st;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    st.insert(x);
  }
  while (y--) {
    int c = *st.begin();
    if ((c ^ x) > c) {
      st.erase(st.begin());
      c = c ^ x;
      st.insert(c);
    } else
      break;
  }
  int rem = y--;
  if (y % 2 != 0) {
    int c = *st.begin();
    st.erase(st.begin());
    c = c ^ x;
    st.insert(c);
  }
  for (auto it : st) {
    cout << it << " ";
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