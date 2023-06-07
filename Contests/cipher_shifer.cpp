#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        char s[n]; cin>>s;
        char x[n] = {0};
        int j=0;
        int v=0;
        char temp = s[v];
        for(int i=0; i<n; i++){
            if(i != v){
                if(temp == s[i]){
                    x[j]=temp;
                    v=i+1;
                    temp=s[v];
                    j++;
                }
            }
        }
        for(int i=0; i<n; i++){
            if(x[i] != 0){
                cout<<x[i];
            }
        }
        cout<<endl;
    }

    return 0;
}

// Problem link: https://codeforces.com/contest/1840/problem/A