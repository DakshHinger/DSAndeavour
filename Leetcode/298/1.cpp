#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
    string str;
    cin >> str;
    map<int, pair<int, int>> mp;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        { // str[i]eck upper case
            int a = str[i] - 'A';
            mp[a].first = 1;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        { // str[i]eck lower case
            int a = str[i] - 'a';
            mp[a].second = 1;
        }
    }
    int ans = -1;
    for (auto it = mp.begin(); it != mp.end(); ++it)
    {
        // cout << it->second.first << "\n";
        if (it->second.first && it->second.second)
        {
            ans = it->first;
        }
    }
    cout << ans;
    string greatestLetter;
    if (ans==-1)
    {
        return "";
    }
    
}

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        solve();
    }
    return 0;
}