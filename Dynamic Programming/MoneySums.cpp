 #include <bits/stdc++.h>
using namespace std;

const int N=100*1000+1; //required for bitset

int main() {

    bitset<N> dp(1);
    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        dp|=dp<<x;
    }
    cout << dp.count()-1 << '\n';
    int first=1;
    for(int i = 1 ; i < N+1; i++){
        if (dp[i]) {
            if (!first) cout << ' ';
            first=0;
            cout << i;
        }
    }
    cout << '\n';
    return 0;
}