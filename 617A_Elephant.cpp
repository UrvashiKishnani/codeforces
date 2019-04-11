#include <bits/stdc++.h>

using namespace std;

int main()
{
    long x;
    cin>>x;
    long ans = x/5;
    if(x%5)
        ans++;
    cout<<ans<<endl;
}
