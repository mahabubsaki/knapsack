#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 6;
int dp[N];
int perfect_squares(int n)
{
    if (n == 0)
        return 0;
    if (dp[n] != -1)
        return dp[n];
    int result = N;
    for (int i = 1; i * i <= n; i++)
    {
        result = min(result, 1 + perfect_squares(n - i * i));
    }
    dp[n] = result;
    return result;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        dp[i] = -1;
    }

    cout << perfect_squares(n);

    return 0;
}