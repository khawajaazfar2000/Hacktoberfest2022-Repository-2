#include<bits/stdc++.h>
using namespace std;

void  LCS(string s1,string s2){
    int n = s1.length(),m=s2.length();
    int dp[n+1][m+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0||j==0){
                dp[i][j]=0;
            }
            else if(s1[i-1]==s2[j-1]){
                dp[i][j] = dp[i-1][j-1]+1;
            }
            else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    // return dp[n][m];
    string str = "";
    int i=n;
    int j=m;
    while(i>=0 || j>=0){
        if(dp[i][j]==dp[i][j-1]){
            j--;
        }
        else if(dp[i][j]==dp[i-1][j]){
            i--;
        }
        else{
            str+=s1[i-1];
            i--;
            j--;
        }
    }
    reverse(str.begin(), str.end());
    cout<<"Longest_sub_sequence is "<<str<<endl<<"Longest_sub_sequence_lenth_is "<<dp[n][m]; 

}
int main(){
    string  s1,s2;
    cin>>s1>>s2;
    LCS(s1,s2);
    return 0;
    
}

// input
// longest
// lowest

// output
// Longest_sub_sequence is loest
// Longest_sub_sequence_lenth_is 5
