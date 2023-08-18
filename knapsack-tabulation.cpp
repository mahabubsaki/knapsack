#include <bits/stdc++.h>
using namespace std;
const int N = 102;
const int M = 1e5 + 5;
long long dp[N][M];
int wt[N], val[N];

int main()
{
    int n, cap;
    cin >> n >> cap;

    for (int i = 1; i <= n; i++)
    {
        cin >> wt[i] >> val[i];
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= cap; j++)
        {
            dp[i][j] = -1;
        }
    }
    for (int i = 0; i <= cap; i++)
    {
        dp[0][i] = 0;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= cap; j++)
        {
            if (j < wt[i])
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = max(val[i] + dp[i - 1][cap - wt[i]], dp[i - 1][cap]);
            }
        }
    }
    cout << dp[n][cap] << endl;
    return 0;
}