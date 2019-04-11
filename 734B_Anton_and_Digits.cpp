#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

using namespace std;

int main()
{
    boost1; boost2;
    long d1, d2, d3, d4, ans = 0;
    cin>>d1>>d2>>d3>>d4;
    long m = min(d1, min(d3, d4));
    ans += (m * 256);
    d1 -= m;
    m = max(0L, min(d1, d2));
    ans += (m * 32);
    cout<<ans<<endl;
    return 0;
}
