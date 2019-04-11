#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

using namespace std;

int main()
{
    boost1; boost2;
    int n;
    cin>>n;
    int cur = 0, prv = 0, ans = 0;
    int x, y, ct;
    vector<int> sol;
    cin>>x;
    ct = 1;
    for(int i = 1; i < n; i++) {
        cin>>y;
        if(x == y) {
           ct++;
        } else {
            sol.push_back(ct);
            ct = 1;
        }
        x = y;
    }
    sol.push_back(ct);
    for(int i = 1; i < sol.size(); i++) {
        ans = max(ans, min(sol[i-1], sol[i]));
    }
    cout<<ans * 2<<endl;
    return 0;
}
