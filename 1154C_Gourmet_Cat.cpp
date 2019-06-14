#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

typedef long long ll;

using namespace std;

int main()
{
    boost1; boost2;
    ll a[3], b[3], ans;
    cin>>a[0]>>a[1]>>a[2];
    int idx[] = {0, 1, 2, 0, 2, 1, 0};
    ans = min(a[0]/3, min(a[1]/2, a[2]/2));
    a[0] -= 3 * ans;
    a[1] -= 2 * ans;
    a[2] -= 2 * ans;
    int max_val = 0;
    for(int start = 0; start < 7; start++) {
        b[0] = a[0], b[1] = a[1], b[2] = a[2];
        int day = start;
        int cur = 0;
        while(b[idx[day]] != 0) {
            cur++;
            b[idx[day]]--;
            day = (day + 1) % 7;
        }
        max_val = max(max_val, cur);
    }
    cout<<(7 * ans) + max_val<<endl;
    return 0;
}
