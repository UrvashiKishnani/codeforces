#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

using namespace std;

int main()
{
    boost1; boost2;
    int x1, x2, x3, ans;
    cin>>x1>>x2>>x3;
    ans = max(x1, max(x2, x3)) - min(x1, min(x2, x3));
    cout<<ans<<endl;
    return 0;
}
