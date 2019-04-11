#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

using namespace std;

int main()
{
    boost1; boost2;
    int n;
    cin>>n;
    vector<long> v;
    long x;
    for(int i = 0; i < n; i++) {
        cin>>x;
        if(x % 2 == 0) {
           x--;
        }
        v.push_back(x);
    }
    for(int i = 0; i < v.size(); i++)
        cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}
