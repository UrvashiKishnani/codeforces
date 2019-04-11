#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    int a[m];
    for(int i = 0; i < m; i++)
        cin>>a[i];
    sort(a, a + m);
    int ans = 1E5;
    for(int i = 0; i + n - 1 < m; i++) {
        if(a[i+n-1] - a[i] < ans)
            ans = a[i+n-1] - a[i];
    }
    cout<<ans<<endl;
    return 0;
}
