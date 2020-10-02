// sorting is cure

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int temp;
    vector<int> a;
    for(int i = 0 ; i < n-1 ; i++){
        cin>>temp;
        a.push_back(temp);
    }
    sort(a.begin(),a.end());
    int res = n;
    for(int i = 0 ; i < n-1 ; i ++){
        if(i+1 != a[i]){
            res = i+1;
            break;
        }
    }
    cout<<res<<endl;
}