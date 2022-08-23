#include <bits/stdc++.h>
using namespace std;
int func(int x, int a)
{
    return int(x / a) + x % a;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        long long int l, r, a;
        cin >> l >> r >> a;
        long long int max = -1;
        if (l > a)
        {
            for (int i = a; i <= r; i++)
            {
                long long int yoo = func(i, a);
                if (yoo > max)
                {
                    max = yoo;
                }
            }
        }

        else
            for (int i = a; i <= r; i++)
            {
                long long int yoo = func(i, a);
                if (yoo > max)
                {
                    max = yoo;
                }
            }
        cout << max << endl;
    }
    return 0;
}