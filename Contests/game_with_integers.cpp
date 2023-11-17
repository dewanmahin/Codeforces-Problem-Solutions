#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int x; cin>>x;
        int add = x+1;
        int sub = x-1;
        if((add % 3 == 0) || (sub % 3 == 0)){
            cout<<"First"<<endl;
        }else{
            cout<<"Second"<<endl;
        }
    }

    return 0;
}

// Problem link: https://codeforces.com/contest/1899/problem/A