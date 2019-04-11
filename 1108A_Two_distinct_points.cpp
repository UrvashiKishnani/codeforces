#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

using namespace std;

int main()
{
    boost1; boost2;
    int q;
    long l1, r1, l2, r2;
    cin>>q;
    for(int i = 0; i < q; i++) {
        cin>>l1>>r1>>l2>>r2;
        if(l1 != l2)
            cout<<l1<<" "<<l2<<endl;
        else if(r1 != r2)
            cout<<r1<<" "<<r2<<endl;
        else
            cout<<l1<<" "<<r1<<endl;
    }
    return 0;
}
