// // class Solution {
// // public:
// //     int maxConsecutive(int bottom, int top, vector<int>& special) {
// //         int count=0,maxf=0;
// //         for(int i=bottom;i<=top;i++){

// //             if(find(special.begin(), special.end(), i)!=special.end()){
// //                 count=0;
// //             }
// //             else{
// //                 count++;
// //             }
// //             maxf=max(maxf,count);

// //         }
// //         return maxf;
// //     }
// // };

// // class Solution
// // {
// // public:
// //     int maxConsecutive(int bottom, int top, vector<int> &special)
// //     {
// //         int count = 0, maxf = 0;
// //         special.push_back(bottom - 1);
// //         special.push_back(top + 1);
// //         sort(special.begin(), special.end());
// //         for (int i = 1; i < special.size(); i++)
// //         {
// //             count = special[i] - special[i - 1] - 1;
// //             maxf = max(maxf, count);
// //         }
// //         return maxf;
// //     }
// // };
// // #include <bits/stdc++.h>
// // using namespace std;

// // int main()
// // {
// //     vector<int> v = {1, 3, 7, 5, 6};
// //     v.push_back(x + 1)

// //         return 0;
// // }

// #include <iostream>
// using namespace std;

// void decToBinary(int n, int arr[])
// {
//     int binaryNum[32];

//     int i = 0;
//     while (n > 0)
//     {

//         binaryNum[i] = n % 2;
//         n = n / 2;
//         i++;
//     }

//     for (int j = 0; j < i; j++)
//         if (binaryNum[j]==1)
//         {
//             arr[i]++;
//         }

// }

// int main()
// {
//     int n = 16;
//     int arr[32] = { 0 };
//     decToBinary(n,arr);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "abddefg";
    cout << s[4]-'a' ;
    int a = INT_MAX;
    return 0;
}