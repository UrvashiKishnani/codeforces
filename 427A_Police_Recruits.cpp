#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

using namespace std;

int main()
{
    boost1; boost2;
    int n, o = 0, ans = 0;
    cin>>n;
    int x;
    for(int i = 0; i < n; i++) {
        cin>>x;
        if(x < 0) {
            if(o > 0)
                o--;
            else
                ans++;
        }
        else {
            o += x;
        }
    }
    cout<<ans<<endl;
    return 0;
}
