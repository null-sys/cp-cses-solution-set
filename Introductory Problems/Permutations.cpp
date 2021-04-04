#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    if(n != 1 && n < 4 ){           //understand the boundary cases
        cout<<"NO SOLUTION";
        cout<<endl;
    }else if(n == 4){
        cout<<2<<" "<<4<<" "<<1<<" "<<3<<endl;
    }
    else{
        for(int i = 1; i <= n; i +=2){
            cout<<i<<" ";
        }
        for(int i = 2; i <= n; i+= 2){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}