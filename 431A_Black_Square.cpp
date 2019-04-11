#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

using namespace std;

int main()
{
    boost1; boost2;
    int a1, a2, a3, a4;
    cin>>a1>>a2>>a3>>a4;
    string s;
    cin>>s;
    long c = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '1')
            c += a1;
        else if(s[i] == '2')
            c += a2;
        else if(s[i] == '3')
            c += a3;
        else if(s[i] == '4')
            c += a4;
    }
    cout<<c<<endl;
    return 0;
}
