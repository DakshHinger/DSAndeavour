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
  string arr[8];
  for (int i = 0; i < 8; i++) {
    cin >> arr[i];
  }
  for (int i = 0; i < 8; i++) {
    int count = 0;
    for (int j = 0; j < 8; j++) {
      if (arr[i][j] == 'R') {
        count++;
      }
    }
    map<int, int> mpp;
    for (int i = 0; i < 5; i++) {
      mpp[i] = i + 3;
    }

    if (count == 8) {
      cout << "R" << endl;
      return;
    }
  }

  //   for (int i = 0; i < 8; i++) {
  //     string s;
  //     cin >> s;
  //     if (s == "RRRRRRRR") {
  //       cout << "R" << endl;
  //       return;
  //     }
  //   }
  cout << "B" << endl;
  return;
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