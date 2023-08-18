#include <bits/stdc++.h>
using namespace std;
const int N = 101;
int dp[N][N];

int unique_paths(int n, int m)
{
    if (n == 0 and m == 0)
        return 1;
    if (dp[n][m] != -1)
    {
        return dp[n][m];
    }
    int ans = 0;
    if (n > 0)
        ans += unique_paths(n - 1, m);
    if (m > 0)
        ans += unique_paths(n, m - 1);
    dp[n][m] = ans;
    return ans;
}

int main()
{
    int r, c;
    cin >> r >> c;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            dp[i][j] = -1;
        }
    }

    cout << unique_paths(r - 1, c - 1);

    return 0;
}