#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

using namespace std;

int main()
{
    boost1; boost2;
    int n, m = 0, ct = 0, ans = 0;
    cin>>n;
    string s;
    cin>>s;
    for(int i = 0; i < n; i++) {
        if(s[i] == 'x')
            ct++;
        else {
            if(ct > 2) {
                ans += (ct - 2);
            }
            ct = 0;
        }
    }
    if(ct > 2)
        ans += (ct - 2);
    cout<<ans<<endl;
    return 0;
}
