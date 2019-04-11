#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

using namespace std;

int main()
{
    boost1; boost2;
    string n;
    cin>>n;
    int ans = 0;
    char prv = 'a';
    for(int i = 0; i < n.size(); i++) {
        char cur = n[i];
        int dist = abs(prv - cur);
        ans += min(dist, 26 - dist);
        prv = cur;
    }
    cout<<ans<<endl;
    return 0;
}
