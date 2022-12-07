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
  int p = 69;
  string ss = "69";
  vector<int> tt(n - 1);
  for (int i = 0; i < n - 1; i++) {
    cin >> tt[i];
  }
  int aTrain = 0, bTrain = 0;
  int time = tt[0];
  for (int i = 0; i < n - 1; i++) {
    if (i - 1 >= 0) {
      bTrain += tt[i - 1];
      aTrain += tt[i - 1];
    } else {
      aTrain += tt[i];
    }
    for (int s = 0; s < 3; s++) {
      aTrain++;
    }
    aTrain -= 3;
    if (aTrain - bTrain < tt[i]) {
      time += tt[i] - (aTrain - bTrain);
      aTrain += tt[i] - (aTrain - bTrain);
    }
    time += tt[i];
  }
  cout << time << endl;
}
//   int n;
//   cin >> n;
//   vector<int> tt(n - 1, 0);
//   vector<int> time(n, 0);
//   //   int x=0;
//   //   time[0] = tt[0];
//   for (int i = 0; i < n - 1; i++) {
//     cin >> tt[i];
//     time[0] = tt[0];
//     if (i == 0) {
//     } else
//       time[i] = time[i - 1] + tt[i];
//   }
//   time[n - 1] = time[n - 2] + tt[n - 2];
//   time.insert(time.begin(), 0);
//   // for (int i = 0; i < n ; i++) {
//   //   cout << time[i] << " ";
//   // }

//   int a = 0, b = 0;
//   a = tt[0];
//   int extra = 0;

//   for (int i = 0; i < n-2; i++) {
//     a += tt[i];
//     if (a < time[i + 1]) {
//       extra += time[i + 1] - a;
//       //   cout << extra << " ";
//       a = tt[i + 1];
//     }
// }

//   for (int i = 1; i < n - 1; i++) {
//     b += tt[i];
//     if (b > time[i - 1]) {
//       extra += b - time[i - 1];
//       b = time[i - 1];
//     }
//   }
// extra += time[n - 1] + tt[n - 2];
// cout << extra << endl;
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

// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define endl '\n'
// #define fastio() \
//   ios_base::sync_with_stdio(false); \
//   cin.tie(NULL); \ cout.tie(NULL)

// const int mod = 1000000007;

// void solve() {
//   int n;
//   cin >> n;
//   vector<int> tt(n - 1, -1);
//   vector<int> time(n, -1);

//   //   int x=0;
//   //   time[0] = tt[0];

//   for (int i = 0; i < n - 1; i++) {
//     cin >> tt[i];
//     if (i == 0) {
//       time[0] = tt[0];
//     } else
//       time[i] = time[i - 1] + tt[i];
//   }
//   //   time[n - 1] = time[n - 2] + tt[n - 2];

//   for (int i = 0; i < n - 1; i++) {
//     cout << time[i] << " ";
//   }

//   int a = tt[0], b = 0;
//   //   a = time[0];
//   int extra = 0;
//   for (int i = 0; i < n - 3; i++) {
//     a += tt[i];
//     if (a < time[i + 1]) {
//       extra += time[i + 1] - a;
//       //   cout << extra << " ";
//       a = time[i + 1];
//     }
//   }
//   extra += time[n - 2] + time[0];
//   cout << extra << endl;
// }

// int32_t main() {
//   fastio();
//   int testcase = 1;
//   cin >> testcase;
//   while (testcase--) {
//     solve();
//   }
//   cout << endl;
//   return 0;
// }