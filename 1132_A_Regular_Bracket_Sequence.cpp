#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

typedef long long ll;

using namespace std;

void no() {
    cout<<"0\n";
    exit(0);
}

int main()
{
    boost1; boost2;
    ll c1, c2, c3, c4;
    cin>>c1>>c2>>c3>>c4;
    if(c1 != c4)
        no();
    if(c1 == 0 && c3 > 0)
        no();
    cout<<"1\n";
    return 0;
}
