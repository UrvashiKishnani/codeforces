#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;
    cin>>a>>b;
    reverse(a.begin(), a.end());
    if(a == b) {
        cout<<"YES\n";
        return 0;
    }
    cout<<"NO\n";

    return 0;
}
