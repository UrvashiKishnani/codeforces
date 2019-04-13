#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

typedef long long ll;

using namespace std;

int main()
{
    boost1; boost2;
    int n, t;
    cin>>n>>t;
    int ans = -1, m = 1E5 + 1, x, y;
    for(int i = 0; i < n; i++) {
        cin>>x>>y;
        if(x == t) {
            ans = i + 1;
            m = 0;
        } else if(x > t) {
            if(x - t < m) {
                ans = i + 1;
                m = x - t;
            }
        } else {
            int temp = t - x;
            int q = temp / y;
            if(temp % y != 0)
                q++;
            if(q*y - temp < m) {
                ans = i + 1;
                m = q*y - temp;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
