#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    if(n < 3 || ((n-3)%4 != 0 && n%4 != 0)){
        cout<<"NO"<<endl;
    }else if(n%4 == 0){
        cout<<"YES"<<endl;
        int size = n/2;

        cout<<size<<endl;
        for(int i = 1 ; i <= n ; i = i+ 4){
            cout<<i+1<<" "<<i+2<<" ";
        }
        cout<<endl;

        cout<<size<<endl;
        for(int i = 1 ; i <= n ; i = i+ 4){
            cout<<i<<" "<<i+3<<" ";
        }
        cout<<endl;

    }
    else{
        cout<<"YES"<<endl;
        int size1 = 2 + (n-3)/2;
        cout<<size1<<endl;

        for(int i = 0 ; i <= n ; i = i+ 4){
            cout<<i+1<<" "<<i+2<<" ";
        }
        cout<<endl;

        int size2 = 1 + (n-3)/2;
        cout<<size2<<endl;

        for(int i = 0 ; i <= n ; i = i+ 4){
            if(i == 0){
                cout<<i+3<<" ";
            }else
            cout<<i<<" "<<i+3<<" ";
        }
        cout<<endl;
    }
    return 0;
}