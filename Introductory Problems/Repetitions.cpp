// good tricky qtn. consider ending

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n = s.length();
    int max = 0;
    int curr = 1;
    char temp = s[0];
    for(int i=1; i < n;i++){
        if( s[i] == temp){
            curr++;
        }
        else{
            temp = s[i];
            if(max < curr){
                max = curr;
            }
            curr = 1;
        }
    }
    if(max < curr){
                max = curr;
            }
    cout<<max<<endl;
}