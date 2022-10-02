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
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if (a == 0 && c == 0) {
    cout << 0 << endl;
    return;
  }
  if (a == 0 || c == 0) {
    cout << 1 << endl;
    return;
  }
  int prod1 = a * d;
  int prod2 = b * c;
  if (prod1 == prod2) {
    cout << 0 << endl;
    return;
  }
  if (prod1 % prod2 == 0 || prod2 % prod1 == 0) {
    cout << 1 << endl;
    return;
  }
  cout << 2 << endl;

  //   if (a * d == 0 && c == 0) {
  //     cout << 0 << endl;
  //     return;
  //   }
  //   if (a == 0 || c == 0) {
  //     cout << 1 << endl;
  //     return;
  //   }
  //   double ans = 1.000;
  //   if (1.0 * a / b > 1.0 * c / d) {
  //     ans = 1.00 * a * d / c * b;
  //   }
  //   if (ceil(ans) == floor(ans)) {
  //   }
  //   int ab = __gcd(a, b);
  //   int cd = __gcd(c, d);
  //   a /= ab;
  //   b /= ab;
  //   c /= cd;
  //   d /= cd;
  //   int ac = __gcd(a, c);
  //   int bd = __gcd(b, d);
  //   a /= ac;
  //   b /= bd;
  //   c /= ac;
  //   d /= bd;
  //   if (a == c && b == d) {
  //     cout << 0 << endl;
  //     return;
  //   }
  //   if (a == c || b == d) {
  //     cout << 1 << endl;
  //     return;
  //   }

  //   //   if((max(a,c)%min(a,c)==0||max(b,d)%min(b,d)==0) && a!=1 && b!=1 &&
  //   c!=1
  //   //   && d!=1){
  //   //     cout << 1 << endl;
  //   //     return;
  //   //   }
  //   cout << 2 << endl;
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