#include<bits/stdc++.h>
using namespace std;

int MAX = 10000000;

int main(){
    int n;
    cin>>n;

    vector<int> dp(n+1,MAX);

    dp[0] = 0;

    for(int i =1 ; i < n+1; i++){
        for(int j = i; j > 0 ; j = j/10){
            dp[i] = min(dp[i],dp[i-j%10]+1);
        }
    }
    cout<<dp[n]<<endl;
}