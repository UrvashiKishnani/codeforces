#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

typedef long long ll;

using namespace std;

int main()
{
    boost1; boost2;
    ll n, d, ans = 0, m_ans = 0;
    vector<pair<ll, ll> > f;
    cin>>n>>d;
    for(ll i = 0; i < n; i++) {
        ll x, y;
        cin>>x>>y;
        f.push_back({x, y});
    }
    sort(f.begin(), f.end());

    ll st = 0, nx = 1;
    ans = f[st].second;
    while(nx < n) {
        if(f[nx].first - f[st].first < d) {
            ans += f[nx].second;
            nx++;
        } else {
            m_ans = max(m_ans, ans);
            ans -= f[st].second;
            st++;
        }
    }
    m_ans = max(m_ans, ans);
    cout<<m_ans<<endl;
    return 0;
}
