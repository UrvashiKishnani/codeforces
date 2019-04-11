#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

using namespace std;

int main()
{
    boost1; boost2;
    int n, m;
    cin>>n>>m;
    int a[n];
    bool b[10];
    memset(b, false, 10);
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    for(int i = 0; i < m; i++) {
        int x;
        cin>>x;
        b[x] = true;
    }
    for(int i = 0; i < n; i++) {
        if(b[a[i]])
            cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
