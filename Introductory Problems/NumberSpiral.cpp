//16:31
#include<bits/stdc++.h>
using namespace std;

int main(){

    int t = 0;
    cin>>t;
    while(t--){
        unsigned long long int x,y,m,res;
        cin>>x>>y;
        m = max(x,y);
        res = m * m;

        if(y == m ){
            if(y%2 == 1){
                res = res + 1 - x;
            }else{
                res = (m-1)*(m-1) + x;
            }
        }else{
            if(x%2 == 0){
                res = res + 1 - y;
            }else{
                res = (m-1)*(m-1) + y;
            }
        }
        cout<<res;
        cout<<endl;
    }


    return 0;
}