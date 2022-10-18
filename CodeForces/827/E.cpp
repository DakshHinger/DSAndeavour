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
  int n, q;
  cin >> n >> q;
  vector<int> height(n);
  vector<int> h(n);
  vector<int> len(q);
  for (int i = 0; i < n; i++) {
    cin >> height[i];
  }
  for (int i = 0; i < q; i++) {
    cin >> len[i];
  }
  map<int, int> mpp;
  int maxi = -1;
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += height[i];
    maxi = max(maxi, height[i]);
    mpp[maxi] = sum;
  }
  auto it = mpp.begin();
  //   while (it != mpp.end()) {
  //     cout << it->first << " " << it->second << endl;
  //     it++;
  //   }
  for (int i = 0; i < q; i++) {

    auto it = mpp.lower_bound(len[i]);
    int n;
    //   cin >> n;
    //   vector<int> v(n);
    //   for (int i = 0; i < n; i++) {
    //     cin >> v[i];
    //   }
    //   int ans = -1;
    //   for (int i = 0; i < n; i++) {
    //     for (int j = i; j < n; j++) {
    //       if (__gcd(v[i], v[j]) == 1) {
    //         ans = max(ans, i + j + 2);
    //       }
    //     }
    //   }
  //   if (iterator == mpp.end()) {
  //     iterator--;
  //     cout << iterator->second << " ";
  //   } else {
  //     if (iterator->first != len[i]) {
  //       iterator--;
  //       cout << iterator->second << " ";
  //     } else {
  //       cout << iterator->second << " ";
  //     }
  //   }
  // }
  // cout << endl;
  if(it==mpp.end()){
      it--;
      cout<<(*it).second<<" ";
    }
    else {
      if((*it).first!=len[i]){
        it--;
        cout<<(*it).second<<" ";
      }
      else{
        cout<<(*it).second<<" ";
      }
    }
  }
  cout<<endl;
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