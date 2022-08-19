#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool checkf(int cno, int num, int i)
{
    int a;
    a = num - cno;
    if (a / 10 >= i)
    {
        return true;
    }
    return false;
}
void solve()
{
    int num, k;
    cin >> num >> k;
    if (num < k)
    {
        int ans;
        ans = -1;
    }
    if (num = k)
    {
        int ans;
        ans = 1;
    }
    int wlast = num % 10;
    int clast = 0;
    int cno = 0;
    for (int i = 1; i < 10; i++)
    {
        cno += k;
        clast = cno % 10;
        if (num < cno)
        {
            int ans;
            ans = -1;
        }

        if (clast == wlast && checkf(cno, num, i))
        {
        }
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