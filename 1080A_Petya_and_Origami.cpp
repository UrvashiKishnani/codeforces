#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

using namespace std;

int main()
{
    boost1; boost2;
    long long n, k, ans;
    cin>>n>>k;
    ans = ceil((n*2.0)/k) + ceil((n*5.0)/k) + ceil((n*8.0)/k);
    cout<<ans<<endl;
    return 0;
}
