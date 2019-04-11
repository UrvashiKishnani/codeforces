#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

using namespace std;

int main()
{
    boost1; boost2;
    int n, m;
    cin>>n>>m;
    bool b[m];
    memset(b, false, m);
    vector<int> a;
    for(int i = 0; i < n; i++) {
        int x, y;
        cin>>x>>y;
        for(int j = x - 1; j < y; j++)
            b[j] = true;
    }
    for(int i = 0; i < m; i++) {
        if(!b[i])
            a.push_back(i+1);
    }
    cout<<a.size()<<endl;
    for(int i = 0; i < a.size(); i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
