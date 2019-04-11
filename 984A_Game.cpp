#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

using namespace std;

int main()
{
    boost1; boost2;
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin>>a[i];
    sort(a, a + n);
    if(n % 2)
        cout<<a[n/2];
    else
        cout<<a[n/2 - 1];
    return 0;
}
