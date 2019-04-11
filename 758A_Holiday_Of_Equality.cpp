#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

using namespace std;

int main()
{
    boost1; boost2;
    int n;
    cin>>n;
    long m = 0;
    long ans = 0, a[n];
    for(int i = 0; i < n; i++) {
        cin>>a[i];
        if(a[i] > m)
            m = a[i];
    }
    for(int i = 0; i < n; i++) {
        ans += (m - a[i]);
    }
    cout<<ans<<endl;
    return 0;
}
