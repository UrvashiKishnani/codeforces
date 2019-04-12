#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

typedef long long ll;

using namespace std;

int main()
{
    boost1; boost2;
    int n;
    cin>>n;
    long a[n];
    ll sum = 0;
    for(int i = 0; i < n; i++) {
        cin>>a[i];
        sum += a[i];
    }
    sort(a, a+n);
    int q;
    cin>>q;
    for(int i = 0; i < q; i++) {
        int x;
        cin>>x;
        cout<<sum - a[n-x]<<endl;
    }
    return 0;
}
