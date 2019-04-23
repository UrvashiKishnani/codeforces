#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

typedef long long ll;

using namespace std;

int main()
{
    boost1; boost2;
    int n, m;
    cin>>n>>m;
    int prv = 1, cur;
    ll ans = 0;
    for(int i = 0; i < m; i++) {
        cin>>cur;
        if(prv <= cur)
            ans += (cur - prv);
        else
            ans += (n - prv + cur);
        prv = cur;
    }
    cout<<ans;
    return 0;
}
