#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        string str; cin>>str;
        if((str[0] != 'a') && (str[1] != 'b') && (str[2] != 'c')){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }

    return 0;
}

// Problem link: https://codeforces.com/contest/1873/problem/A