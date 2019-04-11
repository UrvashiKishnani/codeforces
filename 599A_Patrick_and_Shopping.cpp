#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

using namespace std;

int main()
{
    boost1; boost2;
    long d1, d2, d3, ans = 0;
    cin>>d1>>d2>>d3;
    if(d2 < d1)
        swap(d1, d2);
    ans += d1;
    if(d1 + d2 < d3) {
        ans += (d1 + 2 * d2);
    } else {
        ans += d3;
        ans += min(d3 + d1, d2);
    }
    cout<<ans<<endl;
    return 0;
}
