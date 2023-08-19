// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1009;
// int dp[N][N];

// int gridPaths(int i, int j)
// {
//     if (i < 1 || j < 1)
//     {
//         return 0;
//     }

//     if (i == 1 && j == 1)
//     {
//         return 1;
//     }

//     if (dp[i][j] != -1)
//     {
//         return dp[i][j];
//     }

//     int ans = gridPaths(i - 1, j) + gridPaths(i, j - 1);
//     dp[i][j] = ans;

//     return ans;
// }
// int main()
// {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             char x;
//             cin >> x;

//             if (x == '.')
//             {
//                 dp[i][j] = -1;
//             }
//             else
//             {
//                 dp[i][j] = 0;
//             }
//         }
//     }
//     cout << gridPaths(n, n);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

const int N = 1009;
int dp[N][N];

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char x;
            cin >> x;
            if (x == '.')
            {

                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];

                if ((i == 1) && (j == 1))
                {
                    dp[i][j] = 1;
                }
            }
            else
            {
                dp[i][j] = 0;
            }
        }
    }

    cout << dp[n][n] << endl;

    return 0;
}
