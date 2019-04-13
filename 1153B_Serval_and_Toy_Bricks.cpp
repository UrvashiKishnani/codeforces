#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

typedef long long ll;

using namespace std;

int main()
{
    boost1; boost2;
    int n, m, h;
    cin>>n>>m>>h;
    int a[n][m];
    int f[m], l[n];
    for(int i = 0; i < m; i++)
        cin>>f[i];
    for(int i = 0; i < n; i++)
        cin>>l[i];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin>>a[i][j];
            a[i][j] = a[i][j] * min(l[i], f[j]);
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
