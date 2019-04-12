#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

typedef long long ll;

using namespace std;

int main()
{
    boost1; boost2;
    long n;
    cin>>n;
    for(int i = floor(sqrt(n)); i >= 1; i--) {
        if(n % i == 0) {
            cout<<i<<" "<<(n/i)<<endl;
            exit(0);
        }
    }
    return 0;
}
