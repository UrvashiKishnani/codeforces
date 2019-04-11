#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k, ans;
    cin>>n>>k;
    if(k <= ceil(n/2.0))
        ans = k*2 - 1;
    else {
        k = k - ceil(n/2.0);
        ans = k*2;
    }
    cout<<ans<<endl;
}
