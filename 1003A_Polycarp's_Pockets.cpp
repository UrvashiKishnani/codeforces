#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

using namespace std;

int main()
{
    boost1; boost2;
    int n, c = 1, mc = 0;
    cin>>n;
    int a [n];
    for(int i = 0; i < n; i++)
        cin>>a[i];
    sort(a, a + n);
    for(int i = 1; i < n; i++) {
        if(a[i] == a[i-1])
            c++;
        else {
            if(c > mc)
                mc = c;
            c = 1;
        }
    }
    if(c > mc)
        mc = c;
    cout<<mc<<endl;
    return 0;
}
