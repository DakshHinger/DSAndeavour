#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string key = "the quick brown fox jumps over the lazy dog", message = "vkbs bs t suepuv";
    unordered_map<char, char> mp;

    int a = 97;
    for (int i = 0; i < key.size(); i++)
    {
        if (mp.size() == 26)
        {
            break;
        }

        if (key[i] == ' ')
        {
            continue;
        }

        if (mp.find(key[i]) == mp.end())
        {
            mp[key[i]] = a;
            a++;
        }
    }

    if (mp.size() < 26)
    {
        return;
    }
    string ans;
    for (int i = 0; i < message.size(); i++)
    {
        if (message[i] == ' ')
        {
            ans.push_back(' ');
        }
        else
        {
            ans.push_back(mp[message[i]]);
        }
    }
    cout << ans;

    
}
int main()
{
    solve();

    return 0;
}