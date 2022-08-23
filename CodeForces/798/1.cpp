#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size1, size2, k;
    cin >> size1 >> size2 >> k;
    string string1, string2, ans;

    cin >> string1;
    cin >> string2;

    sort(string1.begin(), string1.end());
    sort(string2.begin(), string2.end());

    int pointer1 = 0, pointer2 = 0;
    while (pointer1 < size1 && pointer2 < size2)
    {
        if (string1[pointer1] < string2[pointer2])
        {
            int loop = 0, count = 1, dummy = pointer1;
            while (loop < k && dummy < size1 - 1)
            {
                if (string1[dummy] == string1[dummy + 1])
                {
                    count++;
                }
                else
                    break;
                loop++;
                dummy++;
            }
            for (int i = 0; i < count; i++)
            {
                ans.push_back(string1[pointer1 + i]);
            }
            pointer1 = pointer1 + count;
        }
        else
        {
            int loop = 0, count = 1, dummy = pointer2;
            while (loop < k && dummy < size2 - 1)
            {
                if (string2[dummy] == string2[dummy + 1])
                {
                    count++;
                }
                else
                    break;
                loop++;
                dummy++;
            }
            for (int i = 0; i < count; i++)
            {
                ans.push_back(string2[pointer2 + i]);
            }
            pointer2 = pointer2 + count;
        }
    }
    cout << ans;
    return 0;
}