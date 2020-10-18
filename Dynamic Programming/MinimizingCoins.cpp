#include<bits/stdc++.h>
using namespace std;

int MAX = 10000000;

int main(){
    int n,x;
    cin>>n>>x;
    MAX = x+1;
    vector<int> dp(x+1,MAX);

    vector<int> coin(n+1,0);

    for(int i = 0 ; i < n ; i++){
        cin>>coin[i+1];
    }
    dp[0] = 0;
    for(int i = 1 ; i < x+1; i++){
        for(int j = 1 ; j < n+1; j++){
            if(i >= coin[j])
            dp[i] = min(dp[i], dp[i - coin[j]]+1);
        }
    }
    if(dp[x] ==  MAX){
        cout<<-1<<endl;
    }
    else
        cout<<dp[x]<<endl;

}

