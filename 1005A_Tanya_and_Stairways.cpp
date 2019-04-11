#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

using namespace std;

int main()
{
    boost1; boost2;
    int n;
    cin>>n;
    int x[n];
    vector<int> a;
    for(int i = 0; i < n; i++) {
        cin>>x[i];
    }
    for(int i = 1; i < n; i++) {
        if(x[i] == 1)
            a.push_back(x[i-1]);
    }
    a.push_back(x[n-1]);
    cout<<a.size()<<endl;
    for(int i = 0; i < a.size(); i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
