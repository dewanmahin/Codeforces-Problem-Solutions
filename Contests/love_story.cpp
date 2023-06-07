#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    string x = "codeforces";
    while(t--){
        int count=0;
        string s; cin>>s;
        for(int i=0; i<10; i++){
            if(s[i] != x[i]){
                count++;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}

// Problem link: https://codeforces.com/contest/1829/problem/A