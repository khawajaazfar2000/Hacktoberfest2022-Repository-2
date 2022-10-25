#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve(int arr[],vector<int> &v,int index,int n,int freq[]){
    
    if(v.size() == n){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }

    for(int i=0;i<n;i++){
        if(!freq[i]){
        freq[i] = 1;
        v.push_back(arr[i]);
        solve(arr,v,index+1,n,freq);
        v.pop_back();
        freq[i] = 0;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

	
    int n;
    cin>>n;
    int arr[n],freq[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        freq[i] = 0;
    }
    vector<int> v;
    solve(arr,v,0,n,freq);
    return 0;
}

//input 
// 4
// 1 2 3 4

//output 
// 1 2 3 4 
// 1 2 4 3 
// 1 3 2 4 
// 1 3 4 2 
// 1 4 2 3 
// 1 4 3 2 
// 2 1 3 4 
// 2 1 4 3
// 2 3 1 4
// 2 3 4 1
// 2 4 1 3
// 2 4 3 1
// 3 1 2 4
// 3 1 4 2
// 3 2 1 4
// 3 2 4 1
// 3 4 1 2
// 3 4 2 1
// 4 1 2 3
// 4 1 3 2
// 4 2 1 3
// 4 2 3 1
// 4 3 1 2
// 4 3 2 1
