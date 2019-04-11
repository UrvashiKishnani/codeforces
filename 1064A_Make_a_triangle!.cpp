#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

using namespace std;

int main()
{
    boost1; boost2;
    int a[3], ans;
    cin>>a[0]>>a[1]>>a[2];
    sort(a, a + 3);
    ans = a[2] - (a[0] + a[1]);
    if(ans >= 0)
        cout<<(ans + 1)<<endl;
    else
        cout<<"0"<<endl;
    return 0;
}
