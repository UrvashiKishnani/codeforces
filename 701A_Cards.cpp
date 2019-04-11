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
    vector<pair<int, int> > a;
    for(int i = 0; i < n; i++) {
        int x;
        cin>>x;
        a.push_back({x, i+1});
    }
    sort(a.begin(), a.end());
    for(int i = 0; i < n/2; i++) {
        cout<<a[i].second<<" "<<a[n-i-1].second<<endl;
    }
    return 0;
}
