#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;
    cin>>n;
    cin>>s;
    bool b[26];
    memset(b, false, 26);
    if(n < 26) {
        cout<<"NO\n";
        exit(0);
    }
    for(int i = 0; i < n; i++) {
        s[i] = tolower(s[i]);
        b[s[i] - 'a'] = true;
    }

    for(int i = 0; i < 26; i++) {
        if(!b[i]) {
            cout<<"NO\n";
            exit(0);
        }
    }

    cout<<"YES\n";

    return 0;
}
