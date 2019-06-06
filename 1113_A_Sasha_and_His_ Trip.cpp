#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

typedef unsigned long long ll;

using namespace std;

int main()
{
    boost1; boost2;
    int n, v;
    cin>>n>>v;
    n--;
    int ans = min(v, n);
    int d = n - v;
    int i = 2;
    while(d > 0) {
        ans += i;
        i++;
        d--;
    }
    cout<<ans<<endl;
    return 0;
}
