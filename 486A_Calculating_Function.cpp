#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, ans;
    cin>>n;
    if(n % 2)
        ans = (-1)*(n/2 + 1);
    else
        ans = n / 2;
    cout<<ans<<endl;
}
