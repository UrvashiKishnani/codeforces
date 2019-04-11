#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

using namespace std;

int main()
{
    boost1; boost2;
    long long n, c = 0;
    cin>>n;
    long long a[n];
    for(long long i = 0; i < n; i++) {
        cin>>a[i];
    }
    long long cur = a[n-1];
    c += cur;
    for(long long i = n-2; i >= 0; i--) {
        if(a[i] >= cur) {
            if(cur > 0)
                cur--;
        }
        else
            cur = a[i];
        c += cur;
    }
    cout<<c;
    return 0;
}
