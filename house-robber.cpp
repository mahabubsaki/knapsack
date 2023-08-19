#include <bits/stdc++.h>
using namespace std;
const int N = 109;
int n;
int dp[N];
int arr[N];

int house_rob(int x, bool flg)
{
    if ((x == n - 1 and flg) or (x >= n))
    {
        return 0;
    }
    if (dp[x] != -1)
        return dp[x];
    int ans = max(arr[x] + house_rob(x + 2, flg), house_rob(x + 1, flg));
    dp[x] = ans;
    return ans;
}

int main()
{

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (n == 1)
    {
        cout << arr[0];
        return 0;
    }
    for (int i = 0; i <= n; i++)
    {
        dp[i] = -1;
    }
    int ans1 = house_rob(0, true);
    for (int i = 0; i <= n; i++)
    {
        dp[i] = -1;
    }
    int ans2 = house_rob(1, false);

    int ans = max(ans1, ans2);
    cout << ans;
    return 0;
}