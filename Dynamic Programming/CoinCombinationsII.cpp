/*
 TLE may occure due to useless mod operations
*/

#include<bits/stdc++.h>
using namespace std;

int MOD = 1000000007;

int main(){
    int n,x;
    cin>>n>>x;
    vector<vector<int> > dp( n+1 , vector<int> (x+1, 0));

    vector<int> coin(n+1,0);

    for(int i = 0 ; i < n ; i++){
        cin>>coin[i+1];
    }
    coin[0] = 0;
    sort(coin.begin(),coin.end());
    dp[0][0] = 1;
    for(int j = 1 ; j <= n ; j++){
        dp[j][0] = 1;
        for(int i = 1 ; i <= x; i++){
            long long int sum = dp[j-1][i];
            if(i - coin[j] >=0){
                sum = sum + dp[j][i - coin[j]];
            }
            if(sum > MOD){
                sum = sum - MOD;
            }
            dp[j][i] = sum;
        }
    }
        cout<<dp[n][x]<<endl;

}

