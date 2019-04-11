#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

using namespace std;

int main()
{
    boost1; boost2;
    int n;
    cin>>n;
    bool b[6];
    memset(b, false, 6);
    string col[] = {"purple", "green", "blue", "orange", "red", "yellow"};
    string gem[] = {"Power", "Time", "Space", "Soul", "Reality", "Mind"};
    vector<string> ans;
    for(int i = 0; i < n; i++) {
        string s;
        cin>>s;
        switch(s[0]) {
            case 'p' : b[0] = true; break;
            case 'g' : b[1] = true; break;
            case 'b' : b[2] = true; break;
            case 'o' : b[3] = true; break;
            case 'r' : b[4] = true; break;
            case 'y' : b[5] = true; break;
        }
    }
    for(int i = 0; i < 6; i++) {
        if(!b[i])
            ans.push_back(gem[i]);
    }
    cout<<ans.size()<<endl;
    for(int i = 0; i < ans.size(); i++)
        cout<<ans[i]<<endl;
    return 0;
}
