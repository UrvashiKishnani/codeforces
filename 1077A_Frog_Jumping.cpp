#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

using namespace std;

int main()
{
    boost1; boost2;
    int n;
    cin>>n;
    long long a, b, k, ans;
    for(int i = 0; i < n; i++) {
        cin>>a>>b>>k;
        ans = (a - b) * (k / 2) + a * (k % 2);
        cout<<ans<<endl;
    }
    return 0;
}
