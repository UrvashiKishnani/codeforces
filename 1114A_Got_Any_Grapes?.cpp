#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

typedef long long ll;

using namespace std;

void no() {
    cout<<"NO\n";
    exit(0);
}

int main()
{
    boost1; boost2;
    int f[3], g[3];
    cin>>f[0]>>f[1]>>f[2];
    cin>>g[0]>>g[1]>>g[2];
    if(g[0] - f[0] < 0)
        no();
    else {
        g[0] -= f[0];
    }

    g[1] += g[0];
    if(g[1] - f[1] < 0)
        no();
    else {
        g[1] -= f[1];
    }

    g[2] += g[1];
    if(g[2] - f[2] < 0)
        no();
    else {
        cout<<"YES\n";
    }

    return 0;
}
