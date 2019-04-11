#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

using namespace std;

int main()
{
    boost1; boost2;
    long long n, c = 0;
    cin>>n;
    string s;
    cin>>s;
    for(long i = 0; i < n; i++) {
        if((int)s[i] % 2 == 0) {
            c += i + 1;
        }
    }
    cout<<c;
    return 0;
}
