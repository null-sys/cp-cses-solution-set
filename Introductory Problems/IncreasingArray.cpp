// about understanding problem : level basic

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a;
    int temp;
    for(int i=0; i<n ; i++){
        cin>>temp;
        a.push_back(temp);
    }
    long long int res = 0;

    int limit = a[0];
    for(int i=0; i<n ; i++){
        if(a[i] < limit){
            res += limit - a[i];
        }
        else{
            limit = a[i];
        }
    }
    cout<<res<<endl;
}