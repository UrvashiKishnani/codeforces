#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, p;
    cin>>n;
    bool b[n+1];
    cin>>p;
    memset(b, false, n+1);
    for(long i = 0; i < p; i++) {
        int x;
        cin>>x;
        b[x] = true;
    }
    cin>>p;
    for(long i = 0; i < p; i++) {
        int x;
        cin>>x;
        b[x] = true;
    }
    for(long i = 1; i < n + 1; i++) {
        if(!b[i]) {
            cout<<"Oh, my keyboard!\n";
            exit(0);
        }
    }
    cout<<"I become the guy.\n";
    return 0;
}
