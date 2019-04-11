#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

using namespace std;

int main()
{
    boost1; boost2;
    int n, ans = 0;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin>>a[i];
    sort(a, a+n);
    for(int i = 1; i < n; i+=2) {
        ans += a[i] - a[i-1];
    }
    cout<<ans<<endl;
    return 0;
}
