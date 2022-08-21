#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {2, 5, 7, 2, 5, 1, 5};
    cout << min_element(nums.begin(), nums.end()) - nums.begin();
    return 0;
}