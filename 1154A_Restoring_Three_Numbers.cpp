#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

typedef long long ll;

using namespace std;

int main()
{
    boost1; boost2;
    ll x[4], a, b, c;
    cin>>x[0]>>x[1]>>x[2]>>x[3];
    sort(x, x+4);
    cout<<(x[3] - x[0])<<" "<<(x[3] - x[1])<<" "<<(x[3] - x[2])<<endl;
    return 0;
}
