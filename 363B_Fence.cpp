#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

typedef long long ll;

using namespace std;

int main()
{
    boost1; boost2;
    int n, k;
    cin>>n>>k;
    int a[n];
    long sum = 0, m;
    int ans = 1;
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    for(int i = 0; i < k; i++) {
        sum += a[i];
    }
    m = sum;
    for(int i = k; i < n; i++) {
        sum = sum - a[i - k] + a[i];
        if(sum < m) {
            m = sum;
            ans = i - k + 2;
        }
    }
    cout<<ans<<endl;
    return 0;
}
