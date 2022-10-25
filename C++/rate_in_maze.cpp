#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

bool rateinmaze(int i,int j,vector<vector<int>> &v,vector<vector<int>> &visited,int n,int dx[],int dy[]){
    if(i == n-1 && j == n-1){
        visited[n-1][n-1] = 1;
        return true;
    }

    for(int k = 0; k < 2;k++){
        int nextx = i + dx[k];
        int nexty = j + dy[k];
        if(nextx >= 0 && nexty >= 0 && nextx < n && nexty < n && !visited[nextx][nexty] && v[nextx][nexty] == 1){
            visited[i][j] = 1;
            if(rateinmaze(nextx,nexty,v,visited,n,dx,dy)){
                return true;
            }
            visited[i][j] = 0;
        }

    }
    return false;
}
void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> v(n,vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> v[i][j];
        }
    }
    vector<vector<int>> visited(n, vector<int>(n,0));
    int dx[2] = {1,0};
    int dy[2] = {0,1};
    
    if(rateinmaze(0,0,v,visited,n,dx,dy)){
        //visited[n-1][n-1] == 1;
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << visited[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    solve();
    return 0;
}


// 4 
// 1 0 0 0
// 1 1 0 1
// 0 1 0 0
// 1 1 1 1
// YES
// 1 0 0 0
// 1 1 0 0
// 0 1 0 0
// 0 1 1 1
