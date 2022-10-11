#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d, count = 0;
        string n;
        cin >> d >> n;
        for (int i = 0; i < d; i++)
        {
            if (n[i] == '0' || n[i] == '5')
            {
                count = 1;
            }
        }
        if (count)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}