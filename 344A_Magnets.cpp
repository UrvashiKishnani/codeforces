#include <bits/stdc++.h>

using namespace std;

int main()
{
    long n, ans;
    string prev, s;
    cin>>n;
    cin>>prev;
    ans = 1;
    for(long i = 2; i <= n; i++) {
        cin>>s;
        if(s != prev)
            ans++;
        prev = s;
    }
    cout<<ans<<endl;
}
