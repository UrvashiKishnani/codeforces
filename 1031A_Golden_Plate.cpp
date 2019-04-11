#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

using namespace std;

int main()
{
    boost1; boost2;
    int w, h, k;
    cin>>w>>h>>k;
    long ans = 0;
    for(int i = 0; i < k; i++) {
        ans += (w + h - 2) * 2;
        w -= 4;
        h -= 4;
    }
    cout<<ans<<endl;
    return 0;
}
