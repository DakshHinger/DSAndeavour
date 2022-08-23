#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        string s;
        cin >> s;
        char n;
        cin >> n;
        for (int i = 0; i < s.size(); i = i + 2)
        {
            if (s[i] == n)
            {
                cout << "YES" << endl;
                goto end;
            }
        }
        cout << "NO" << endl;
    end:
        int x = 0;
    }
    return 0;
}