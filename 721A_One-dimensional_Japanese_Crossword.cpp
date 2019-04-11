#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

using namespace std;

int main()
{
    boost1; boost2;
    int n, c = 0;
    cin>>n;
    vector<int> v;
    char x;
    bool f = false;
    for(int i = 0; i < n; i++) {
        cin>>x;
        if(x == 'B') {
           c++;
           f = true;
        }
        else if(x == 'W') {
            if(f)
                v.push_back(c);
            c = 0;
            f = false;
        }
    }
    if(f)
        v.push_back(c);
    cout<<v.size()<<endl;
    for(int i = 0; i < v.size(); i++)
        cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}
