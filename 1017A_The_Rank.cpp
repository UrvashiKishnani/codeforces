#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

using namespace std;

int main()
{
    boost1; boost2;
    int n, m, ct = 1;
    cin>>n;
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    m = a + b + c + d;
    for(int i = 1; i < n; i++) {
        cin>>a>>b>>c>>d;
        if((a + b + c + d) > m)
            ct++;
    }
    cout<<ct<<endl;
    return 0;
}
