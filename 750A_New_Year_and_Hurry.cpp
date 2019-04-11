#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

using namespace std;

int main()
{
    boost1; boost2;
    int n, k, ans;
    cin>>n>>k;
    int total = 240 - k;
    int i = 0;
    while (total >= 5*i && i <= n) {
        total -= 5*i;
        i++;
    }
    ans = i - 1;
    cout<<ans<<endl;
    return 0;
}
