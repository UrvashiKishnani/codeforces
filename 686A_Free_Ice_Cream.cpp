#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

typedef long long ll;

using namespace std;

int main()
{
    boost1; boost2;
    int n, d = 0;
    ll x, ic;
    cin>>n>>x;
    ic = x;
    for(int i = 0; i < n; i++) {
        char c;
        ll y;
        cin>>c;
        cin>>y;
        if(c == '+') {
          ic += y;
        } else {
            if(y > ic) {
                d++;
            } else {
                ic -= y;
            }
        }
    }
    cout<<ic<<" "<<d<<endl;
    return 0;
}
