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
    ll l, r, x;
    cin>>x;
    l = x, r = x;
    for(int i = 1; i < n; i++) {
        cin>>x;
        if(x < l)
            l = x;
        if(x > r)
            r = x;
    }
    cout<<(r - l + 1 - n)<<endl;
    return 0;
}
