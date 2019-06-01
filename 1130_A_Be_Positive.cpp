#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

typedef long long ll;

using namespace std;

int main()
{
    boost1; boost2;
    int n, d, c1 = 0, c2 = 0;
    cin>>n;
    d = ceil(n/2.0);
    for(int i = 0; i < n; i++) {
        int x;
        cin>>x;
        if(x > 0)
            c1++;
        else if(x < 0)
            c2++;
    }
    if(c1 >= d)
        cout<<"1\n";
    else if(c2 >= d)
        cout<<"-1\n";
    else
        cout<<"0\n";
    return 0;
}
