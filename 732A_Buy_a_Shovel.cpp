#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

using namespace std;

int main()
{
    boost1; boost2;
    int k, r, ans;
    cin>>k>>r;
    int i = 1;
    while(i < 10) {
        if(((i * k) - r) % 10 == 0 || (i * k) % 10 == 0)
            break;
        i++;
    }
    cout<<i<<endl;
    return 0;
}
