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
  int n, c, q;
  cin >> n >> c >> q;
  string str;
  map<char, set<int>> pos;
  cin >> str;
  for (int i = 0; i < str.size(); i++) {
    if (pos.find(str[i]) != pos.end()) {
      set<int> s = pos[str[i]];
      s.insert(i);
      pos.erase(str[i]);
      pos.insert(make_pair(str[i], s));
    } else {
      set<int> s;
      s.insert(i);
      pos.insert(make_pair(str[i], s));
    }
  }
  for (int i = 0; i < c; i++) {
    int l, r;
    cin >> l >> r;
    string substr = str.substr(l - 1, r - l + 1);
    for (int i = 0; i < substr.size(); i++) {
      if (pos.find(substr[i]) != pos.end()) {
        set<int> s = pos[substr[i]];
        s.insert(i);
        pos.erase(substr[i]);
        pos.insert(make_pair(substr[i], s));
      }
    }
  }
  //   cout << pos['d'].size();
  for (int i = 0; i < q; i++) {

    for (auto it : pos) {
    //   cout << it.first << " ";
      // for (auto itt : it.second) {
      //   cout << itt << " ";
      // }
      for (auto itr = it.second.begin(); itr != it.second.end(); itr++) {
        cout << *itr << " ";
      }
      cout << endl;
    }
  }
  //   auto it = pos;

  //   for (int i = 0; i < c; i++) {
  //     int l, r;
  //     cin >> l >> r;
  //     string substr = str.substr(l - 1, r - l + 1);
  //     str += substr;
  //   }
}

int32_t main() {
  fastio();
  int testcase = 1;
  // cin >> testcase;
  while (testcase--) {
    solve();
  }
  cout << endl;
  return 0;
}