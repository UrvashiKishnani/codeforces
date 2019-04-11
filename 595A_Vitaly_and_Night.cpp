#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

using namespace std;

int main()
{
    boost1; boost2;
    int n, m;
    cin>>n>>m;
    int c = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            int a, b;
            cin>>a>>b;
            if(a || b)
                c++;
        }
    }
    cout<<c<<endl;;
    return 0;
}
