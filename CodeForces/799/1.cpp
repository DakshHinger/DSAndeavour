#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int s;
    int sum;
    vector<int> v;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    if (accumulate(v.begin(), v.end(), 0) < s)
    {
        cout << -1 << endl;
    }
    else
    {
        auto front = v.front();
        auto back = v.end();
        // auto front = v.front();
        //  end = v.end(),
        int back = 0;
        while (accumulate(front, back, 0) != s)
        {
            front = find(v.begin(), v.end(), 1) - v.begin();
            for (int i = n - 1; i > 0; i--)
            {
                if (v[i] == 1)
                {
                    end = i;
                    break;
                }
            }
            back = n - 1 - end;
            if (back < front)
            {
            }
        }
    }

    return 0;
}