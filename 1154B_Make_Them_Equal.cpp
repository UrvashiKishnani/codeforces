#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

typedef long long ll;

using namespace std;

int main()
{
    boost1; boost2;
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    sort(a, a+n);
    int d = a[n-1] - a[0];
    if(d % 2) {
        for(int i = 1; i < n - 1; i++) {
            if(a[i] != a[0] && a[i] != a[n-1]) {
                d = -1;
                break;
            }
        }
    } else {
        d /= 2;
        for(int i = 1; i < n - 1; i++) {
            if(a[i] != a[0] && a[i] != a[n-1] && a[i] != (a[0] + d)) {
                d = -1;
                break;
            }
        }
    }
    cout<<d;
    return 0;
}
