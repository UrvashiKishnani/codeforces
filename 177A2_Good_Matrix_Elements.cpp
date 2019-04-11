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
    long sum = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin>>a[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j || j == (n - 1 - i) || i == n/2 || j == n/2)
                sum += a[i][j];
        }
    }
    cout<<sum<<endl;
    return 0;
}
