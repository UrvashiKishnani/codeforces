#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

typedef long long ll;

using namespace std;

int main()
{
    boost1; boost2;
    long n, o, z, x;
    cin>>n;
    for(long i = 0; i < n; i++) {
        cin>>x;
        if(x == 0)
            z = i;
        else
            o = i;
    }
    cout<<min(z, o) + 1;
    return 0;
}
