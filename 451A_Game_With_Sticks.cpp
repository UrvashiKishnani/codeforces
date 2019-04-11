#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    int ans = min(n, m);
    if(ans % 2)
        cout<<"Akshat\n";
    else
        cout<<"Malvika\n";
    return 0;
}
