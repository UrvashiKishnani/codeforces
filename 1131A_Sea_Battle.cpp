#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

typedef long long ll;

using namespace std;

int main()
{
    boost1; boost2;
    ll w1, h1, w2, h2, ans;
    cin>>w1>>h1>>w2>>h2;
    ans = (h1 + h2 + w1) * 2 + 4;
    cout<<ans<<endl;
    return 0;
}
