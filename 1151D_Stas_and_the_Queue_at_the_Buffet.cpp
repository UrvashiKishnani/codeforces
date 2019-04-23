#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

typedef long long ll;

using namespace std;

int main()
{
    boost1; boost2;
    int n;
    cin>>n;
    ll a[n][2];
    pair<ll, int> s[n];
    for(int i = 0; i < n; i++) {
        cin>>a[i][0]>>a[i][1];
        s[i].first = a[i][1] - a[i][0];
        s[i].second = i;
    }
    sort(s, s+n);
    unsigned long long ans = 0;
    for(int i = 0; i < n; i++) {
        int ind = s[i].second;
        ans += (a[ind][0] * i + a[ind][1] * (n - i - 1));
    }
    cout<<ans<<endl;
    return 0;
}
