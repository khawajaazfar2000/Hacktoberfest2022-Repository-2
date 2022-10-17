#include <bits/stdc++.h>
using namespace std;
void knapsack(int m_w, int n, int W[], int P[])
{
    int dp[n + 1][m_w + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m_w; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            else if (W[i - 1] < j)
            {
                dp[i][j] = max(P[i - 1] + dp[i - 1][j - W[i - 1]], dp[i - 1][j]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    cout << "Maximum profit is: " << dp[n][m_w] << endl;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m_w; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n, m_w;
    cin >> n >> m_w;
    int W[n], P[n];
    for (int i = 0; i < n; i++)
    {
        cin >> W[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> P[i];
    }
    knapsack(m_w, n, W, P);
}

// input
// 4 8 
// 2 3 4 5
// 1 2 5 6

// output:
// Maximum profit is: 7
// 0 0 0 0 0 0 0 0 0
// 0 0 0 1 1 1 1 1 1
// 0 0 0 1 2 2 3 3 3
// 0 0 0 1 2 5 5 6 7
// 0 0 0 1 2 5 6 6 7
