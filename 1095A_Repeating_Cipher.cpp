#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

using namespace std;

int main()
{
    boost1; boost2;
    int n, i = 0, prev = 0;
    cin>>n;
    string s;
    cin>>s;
    while(i + prev < n) {
        prev += i;
        cout<<s[prev];
        i++;
    }
    cout<<endl;
    return 0;
}
