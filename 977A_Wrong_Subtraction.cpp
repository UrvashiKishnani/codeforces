#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    int k;
    cin>>n>>k;
    while(k) {
        if(n % 10 == 0)
            n /= 10;
        else
            n--;
        k--;
    }

    cout<<n;

    return 0;
}
