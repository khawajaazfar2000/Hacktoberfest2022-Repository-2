#include <bits/stdc++.h>
using namespace std;

void coinchange(int arr[], int n, int total)
{
    int dp[n + 1][total + 1];
    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 0;
    }
    for (int i = 0; i <= total; i++)
    {
        dp[0][i] = INT_MAX;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= total; j++)
        {

            if (j >= arr[i-1])
            {

                dp[i][j] = min(dp[i - 1][j], 1 + dp[i][j - arr[i-1]]);
                
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= total; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Minimum number of coin" << dp[n][total] << endl;

    int sol[n + 1] = {0};
    int i = n, j = total;
    do
    {
        if (dp[i][j] == dp[i - 1][j])
        {
            if (sol[i] != 1)
                sol[i] = 0;
            i--;
        }
        else if (dp[i][j] == 1 + dp[i][j - arr[i-1]])
        {
            sol[i] += 1;
            j -= arr[i-1];
        }
    } while (i > 0 && j > 0);
    
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << sol[i] << " ";
    }
    cout << endl;
    // return dp[n][total];
}

int main()
{
    int n, total;
    cin >> n >> total;
    int arr[n];
    //arr[0] = 0;
    for (int i = 0; i <n; i++)
    {
        cin >> arr[i];
    }
    coinchange(arr, n, total);
    return 0;
}

//imput
// 3 30
// 1 10 20

// output
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 
// 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 10 2 3 4 5 6 7 8 9 10 11 3 
// 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 10 1 2 3 4 5 6 7 8 9 10 2  
// Minimum number of coin2
// 1 10 20 
// 0 1 1 
