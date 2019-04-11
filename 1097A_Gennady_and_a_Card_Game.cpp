#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    string x;
    cin>>s;
    map<char, bool> m;
    m['A'] = false;
    m['K'] = false;
    m['Q'] = false;
    m['J'] = false;
    m['T'] = false;
    m['D'] = false;
    m['C'] = false;
    m['S'] = false;
    m['H'] = false;
    for(char i = '2'; i <= '9'; i++)
        m[i] = false;
    for(int i = 0; i < 5; i++) {
        cin>>x;
        m[x[0]] = true;
        m[x[1]] = true;
    }
    if(m[s[0]] || m[s[1]])
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
