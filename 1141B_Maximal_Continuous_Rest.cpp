#include <iostream>

using namespace std;

int main()
{
    long n;
    cin>>n;
    long dp[n];
    int x;
    cin>>x;
    bool f = false;
    if(x) { dp[0] = 1; f = true; }
    else dp[0] = 0;
    long m = dp[0];
    long s = dp[0];
    for(long i = 1; i < n; i++) {
        cin>>x;
        if(x) dp[i] = dp[i-1] + 1;
        else {
            dp[i] = 0;
            f = false;
        }
        if(dp[i] > m) m = dp[i];
        if(f) s = dp[i];
    }

    if((dp[n-1] + s) > m) {
        m = dp[n-1] + s;
    }

    cout<<m<<endl;
    return 0;
}
