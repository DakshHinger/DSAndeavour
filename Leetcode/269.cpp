#include <bits/stdc++.h>
using namespace std;

int minimumDeletions(vector<int> &nums)
{
    int mi = 0;
    int ma = 0;
    int n = nums.size();
    mi = min_element(nums.begin(), nums.end()) - nums.begin();
    ma = max_element(nums.begin(), nums.end()) - nums.begin();
    int begin = max(mi, ma) + 1;
    int end = n - min(mi, ma);
    int middle = min(mi, ma) + n - max(mi, ma) + 1;

    return min(begin, min(end, middle));
}

int main()
{
    vector<int> v = {2, 10, 7, 5, 4, 1, 8, 6};
    cout << minimumDeletions(v);
    return 0;
}