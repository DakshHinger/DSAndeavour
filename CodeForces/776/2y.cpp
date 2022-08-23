#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int abc, xyz, a;
        cin >> abc >> xyz >> a;
        int count = ((xyz / a) - (abc / a));
        int x, y, z;
        x = (xyz / a) + (xyz % a);
        y = ((xyz / a) - 1) + (a - 1);
        z = ((xyz - 1) / a) + (a - 1);
        int vecto[3];
        vecto[0] = x;
        vecto[1] = y;
        vecto[2] = z;
        int res = 0;
        for (int i = 0; i < 2; i++)
        {
            res = max(res, vecto[i]);
        }
        if (count == 0)
        {
            res = x;
        }
        cout << res << endl;
    }
}