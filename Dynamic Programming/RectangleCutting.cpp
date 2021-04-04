#include<bits/stdc++.h>
using namespace std;

int MAX = 500*500 + 500;

int main(){
    int a = 512,b = 512;
    cin>>a>>b;

    vector<vector<int>> dp(a+1,vector<int> (b+1,MAX));

    for(int i = 0 ; i <= a; i++){
        dp[i][0] = i;
        for(int j = 0 ; j <= b ; j++){
            dp[0][j] = j;
            if(i == j){
                dp[i][j] = 0;
            }
        }
    }


    for(int i = 1 ; i <= a ; i++){
        for(int j= 1; j <= b; j++){
            if(i != j){
                for(int k = 1 ; k < j+1 ; k++ ){
                    dp[i][j] = min(dp[i][j],1 + dp[i][j-k] + dp[i][k]);
                }
                for(int k = 1 ; k < i+1 ; k++ ){
                    dp[i][j] = min(dp[i][j],1+dp[i-k][j] + dp[k][j]);
                }
            }
        }
        
    }
    cout<<dp[a][b]<<endl;
}