#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

using namespace std;

int main()
{
    boost1; boost2;
    int n;
    cin>>n;
    int a[n][n];
    for(int i = 0; i < n; i++)
        a[0][i] = 1, a[i][0] = 1;
    for(int i = 1; i < n; i++) {
        for(int j = 1; j < n; j++) {
            a[i][j] = a[i][j-1] + a[i-1][j];
        }
    }
    cout<<a[n-1][n-1]<<endl;
    return 0;
}
