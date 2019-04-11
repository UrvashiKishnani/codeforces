#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, h, ans = 0;
    cin>>n>>h;
    for(long i = 0; i < n; i++) {
        int x;
        cin>>x;
        if(x > h)
            ans += 2;
        else
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}
