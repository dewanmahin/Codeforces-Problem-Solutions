#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int ar[n];
        for(int i=0; i<n; i++){
            cin>>ar[i];
        }
        int zeroCount = 0;
        int count = 0;
        for(int i=0; i<n; i++){
            if(ar[i]==0){
                count++;
                if(ar[i+1] != 0){
                    if(zeroCount < count){
                        zeroCount = count;
                        count = 0;
                    }
                    else count = 0;
                }
            }
        }
        cout<<zeroCount<<endl;
    }

    return 0;
}

// Problem link: https://codeforces.com/contest/1829/problem/B