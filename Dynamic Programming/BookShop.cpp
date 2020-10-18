#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    vector<int> cost(n);
    vector<int> page(n);
    for(int i = 0 ; i < n; i++){
        cin>>cost[i];
    }
    for(int i = 0 ; i < n; i++){
        cin>>page[i];
    }
   vector<vector<int>> dp( n+1,vector<int> (x+1,0));

    for(int i = 0; i < n;i++){
        for(int j = 0 ; j < x+1; j++){
            if(cost[i] <= j ){
                dp[i+1][j] = max(dp[i][j],(page[i]+dp[i][j-cost[i]]));
            }else{
                dp[i+1][j] = dp[i][j];
            }
            
        }

    }
    cout<<dp[n][x]<<endl;

}