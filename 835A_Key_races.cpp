#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

using namespace std;

int main()
{
    boost1; boost2;
    int s, v1, v2, t1, t2;
    cin>>s>>v1>>v2>>t1>>t2;
    long p1, p2;
    p1 = s * v1 + 2 * t1;
    p2 = s * v2 + 2 * t2;
    if(p1 < p2)
        cout<<"First\n";
    else if(p2 < p1)
        cout<<"Second\n";
    else
        cout<<"Friendship\n";
    return 0;
}
