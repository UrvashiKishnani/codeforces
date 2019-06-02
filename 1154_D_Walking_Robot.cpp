#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

typedef long long ll;

using namespace std;

int main()
{
    boost1; boost2;
    int n, b, a, a_max, b_max, ans = 0;
    cin>>n>>b>>a;
    a_max = a; b_max = b;
    for(int i = 0; i < n; i++) {
        int x;
        cin>>x;
        if(x) {
            if(a == a_max)
                a--, ans++;
            else if(b > 0) {
                b--, ans++;
                a++;
            } else if(a > 0)
                a--, ans++;
        } else {
            if(a > 0)
                a--, ans++;
            else if(b > 0)
                b--, ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
