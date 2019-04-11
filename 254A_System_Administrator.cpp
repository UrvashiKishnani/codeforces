#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

using namespace std;

int main()
{
    boost1; boost2;
    int n;
    cin>>n;
    long p1 = 0, p2 = 0, d1 = 0, d2 = 0;
    for(int i = 0; i < n; i++) {
        long t, x, y;
        cin>>t>>x>>y;
        if(t == 1)
            p1 += x, d1 += y;
        else
            p2 += x, d2 += y;
    }
    if(p1 >= d1)
        cout<<"LIVE\n";
    else
        cout<<"DEAD\n";
    if(p2 >= d2)
        cout<<"LIVE\n";
    else
        cout<<"DEAD\n";
    return 0;
}
