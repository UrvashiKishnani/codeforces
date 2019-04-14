#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

typedef long long ll;

using namespace std;

int main()
{
    boost1; boost2;
    int n;
    long l;
    cin>>n>>l;
    vector<double> a;
    for(int i = 0; i < n; i++) {
        int x;
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    double ans = 0;
    for(int i = 1; i < n; i++) {
        if(a[i] - a[i-1] > ans) {
            ans = a[i] - a[i-1];
        }
    }
    cout<<fixed;
    cout<<setprecision(9)<<max(ans/2.0F, max(a[0] - 0, l - a[n-1]))<<endl;
    return 0;
}
