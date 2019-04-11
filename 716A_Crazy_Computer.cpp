#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

using namespace std;

int main()
{
    boost1; boost2;
    long n, c, x, y, ans = 1;
    cin>>n>>c;
    cin>>x;
    for(int i = 1; i < n; i++) {
        cin>>y;
        if(y - x <= c)
            ans++;
        else
            ans = 1;
        x = y;
    }
    cout<<ans<<endl;
    return 0;
}
