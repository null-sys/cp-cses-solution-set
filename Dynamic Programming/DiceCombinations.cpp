#include<bits/stdc++.h>
using namespace std;

int MOD = 1000000007;

int main(){
    int n;
    cin>>n;
    vector<int> a(n+1); 
    a[0] = 1;

    for(int i = 0 ; i <= n ; i++){
        int temp = (i - 6 > 0 ) ? i - 6  : 0;
        for(int j = temp ; j < i ; j++){
            a[i] = (a[i]+ a[j])% MOD;
        }
    }
    cout<<a[n]<<endl;
}

/* 
Dice has 6 possible outcomes; 

we can create next no by adding previously generated no.
*/