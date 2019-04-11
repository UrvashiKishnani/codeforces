#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

using namespace std;

int main()
{
    boost1; boost2;
    int a, b;
    cin>>a>>b;
    if(a < b)
        swap(a, b);
    cout<<b<<" ";
    a -= b;
    a /= 2;
    cout<<a<<endl;
    return 0;
}
