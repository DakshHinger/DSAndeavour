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
  int row, col;
  cin >> row >> col;
  //   int mat[row][col];
  vector<string> mat(row);
  for (int i = 0; i < row; i++) {
    string x;
    cin >> x;
    sort(x.begin(), x.end());
    mat[i] = x;
  }
  //   for (int i = 0; i < row; i++) {
  //     for (int j = 0; j < col; j++) {
  //       cout << mat[i][j];
  //     }
  //     cout << endl;
  //   }
  int ans = 0;
  for (int i = 0; i < row - 1; i++) {
    for (int j = 0; j < col - 1; j++) {
      int count = 0;
      if (mat[i][j] == '1') {
        count++;
      }
      if (mat[i + 1][j] == '1')
        count++;
      if (mat[i][j + 1] == '1')
        count++;
      if (mat[i + 1][j + 1] == '1')
        count++;

      if (count == 0) {
        continue;
      }
      //     int x = 0;
      //   cout << count << " ";
      if (count == 1)
        ans += 1;
      else if (count == 4) {
        ans++;
      }

      else
        ans += 2;

      mat[i][j] = 0;
      mat[i + 1][j] = 0;
      mat[i][j + 1] = 0;
      mat[i + 1][j + 1] = 0;
      //   if (count == 2)
      //     ans += 2;
      //   if (count == 3)
      //     ans += 2;
      //   if (count == 4)
      //     ans += 2;
      //   if (count == 2) {
      //     if ((mat[i][j] == 1 && mat[i + 1][j + 1] == 1) || (mat[i+1][j]
      //   == 1
      //     && mat[i][j + 1] == 1) ){
      //         ans+=
      //     }
    }
  }
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