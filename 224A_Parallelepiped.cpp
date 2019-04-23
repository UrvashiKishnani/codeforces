#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

typedef long long ll;

using namespace std;

int main()
{
    boost1; boost2;
    ll a, b, c, s1, s2, s3;
    cin>>s1>>s2>>s3;
    a = sqrt((s1 * s3) / s2);
    b = sqrt((s2 * s1) / s3);
    c = sqrt((s3 * s2) / s1);
    cout<<4*(a + b + c)<<endl;
    return 0;
}
