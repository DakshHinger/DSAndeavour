#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int a, b;
        cin >> a >> b;
        int n = a + b;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                if (a > 0)
                {
                    cout << "0";
                    a--;
                }
                else
                {
                    cout << "1";
                }
            }
            else
            {
                if (b > 0)
                {
                    cout << "1";
                    b--;
                }
                else
                {
                    cout << "0";
                }
            }
        }

        cout << endl;
    }
    return 0;
}