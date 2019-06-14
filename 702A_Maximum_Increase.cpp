#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

typedef unsigned long long ll;

using namespace std;

int main()
{
    boost1; boost2;
    int n;
    cin>>n;
    int ans = 1;
    int cur = 1;
    int x, prev;
    cin>>x;
    prev = x;
    for(int i = 1; i < n; i++) {
        cin>>x;
        if(x > prev)
            cur++;
        else {
            ans = max(ans, cur);
            cur = 1;
        }
        prev = x;
    }
    ans = max(ans, cur);
    cout<<ans<<endl;
    return 0;
}
