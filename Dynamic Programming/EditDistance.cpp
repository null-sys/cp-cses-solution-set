#include<bits/stdc++.h>
using namespace std;

int main(){

    string a,b;
    cin>>a;
    cin>>b;

    int n = a.length();
    int m = b.length();

    vector<vector<int>> dp(m+1,vector<int>(n+1));

    for(int i= 0 ; i < n+1; i++){
        dp[0][i] = i;
    }
    for(int i = 0 ; i < m+1 ; i++){
        dp[i][0] = i;
    }

    for(int i = 1 ; i < m+1; i++){
        for(int j = 1 ; j < n+1; j++){
            dp[i][j] = 1 + min(dp[i-1][j],dp[i][j-1]); // first compare add & delete options
            int temp = 1;
            if(b[i-1] == a[j-1]) temp = 0;
            dp[i][j] = min(dp[i][j],dp[i-1][j-1]+temp);
        }
    }
    cout<<dp[m][n]<<endl;
}