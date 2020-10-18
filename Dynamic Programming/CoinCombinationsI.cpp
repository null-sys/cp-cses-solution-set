/*
 TLE may occure due to useless mod operations
*/

#include<bits/stdc++.h>
using namespace std;

int MOD = 1000000007;

int main(){
    int n,x;
    cin>>n>>x;
    vector<int> dp(x+1,0);

    vector<int> coin(n+1,0);

    for(int i = 0 ; i < n ; i++){
        cin>>coin[i+1];
    }
    dp[0] = 1;
    for(int i = 1 ; i < x+1; i++){
        for(int j = 1 ; j < n+1; j++){
            if(i - coin[j] >= 0 ){
                long long int sum = dp[i] + dp[i-coin[j]];
                if(sum > MOD){
                    sum = sum - MOD;
                }
                dp[i] = sum;
            }
        }
    }
        cout<<dp[x]<<endl;

}

