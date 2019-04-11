#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ans, a, b, c;
    cin>>a>>b>>c;
    ans = -1;
    if(ans < a + b + c)
        ans = a + b + c;
    if(ans < a + (b * c))
        ans = a + (b * c);
    if(ans < (a + b) * c)
        ans = (a + b) * c;
    if(ans < a * (b + c))
        ans = a * (b + c);
    if(ans < (a * b) + c)
        ans = (a * b) + c;
    if(ans < a * b * c)
        ans = a * b * c;
    cout<<ans<<endl;
}
