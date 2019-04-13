#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

typedef long long ll;

using namespace std;

int main()
{
    boost1; boost2;
    string s;
    cin>>s;
    s += "A";
    vector<int> dp;
    int ct = 0, ans = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'Q')
            ct++;
        else if(s[i] == 'A')
            dp.push_back(ct);
    }
    int last = ct;
    for(int i = 0; i < dp.size(); i++) {
        ans += dp[i] * (last - dp[i]);
    }
    cout<<ans<<endl;
    return 0;
}
