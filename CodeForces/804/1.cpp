#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

vector<int> toggleRow(vector<int> row, int col)
{
    int toggle = 1;
    for (int i = 0; i < col; i = i + 2)
    {
        if (toggle)
        {
            if (i + 1 < col)
            {
                row[i + 1] = !row[i + 1];
                toggle = 0;
            }
        }
        else
        {
            row[i] = !row[i];
            toggle = 1;
        }
    }
    return row;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat;
    vector<int> row0(m, 1);
    vector<int> row1(m, 0);
    vector<int> row2(m, 0);
    vector<int> row3(m, 1);
    // int toggle = 1;
    int x = 0;
    for (int i = 0; i < n;)
    {
        if (x % 4 == 0 && i < n)
        {
            vector<int> row = toggleRow(row0, m);
            mat.push_back(row);
            x++;
            i++;
        }
        if (x % 4 == 1 && i < n)
        {
            vector<int> row = toggleRow(row1, m);
            mat.push_back(row);
            x++;
            i++;
        }
        if (x % 4 == 2 && i < n)
        {
            vector<int> row = toggleRow(row2, m);
            mat.push_back(row);
            x++;
            i++;
        }
        if (x % 4 == 3 && i < n)
        {
            vector<int> row = toggleRow(row3, m);
            mat.push_back(row);
            x++;
            i++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int32_t main()
{
    fastio();
    int testcase = 1;
    cin >> testcase;
    while (testcase--)
    {
        solve();
    }
    cout << endl;
    return 0;
}