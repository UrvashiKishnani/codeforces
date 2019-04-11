#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

using namespace std;

int main()
{
    boost1; boost2;
    int n;
    cin>>n;
    vector<string> a;
    string s;
    for(int i = 0; i < n; i++) {
        cin>>s;
        a.push_back(s);
    }
    cout<<"NO\n";
    for(int i = 1; i < n; i++) {
        bool b = false;
        for(int j = 0; j < i; j++) {
            if(a[j] == a[i]) {
                b = true;
            }
        }
        if(b)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
