#include<bits/stdc++.h>
using namespace std;

constexpr int MOD=1e9+7;

int main(){
    int n;
    cin>>n;
    vector<string> path(n);
    for(int i = 0 ; i < n; i++){
        cin>>path[i];
    }
    vector<vector<int>> dp(n+1,vector<int> (n+1,0));
    dp[1][0] = 1;

    for(int i =0 ; i < n; i++){
        for(int j=0; j<n;j++){
            if(path[i][j] == '.'){
            long int sum = dp[i][j+1]+dp[i+1][j];
            if(sum > MOD){
                sum = sum % MOD;
            }
            dp[i+1][j+1] = sum;
            }
        }
    }
    cout<<dp[n][n]<<endl;
}