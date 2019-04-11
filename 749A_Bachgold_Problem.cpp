#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

using namespace std;

int main()
{
    boost1; boost2;
    int n, c;
    cin>>n;
    c = n/2;
    cout<<c<<endl;
    if(n%2 == 0) {
        for(int i = 0; i < c; i++)
            cout<<"2 ";
    }
    else {
        for(int i = 0; i < c - 1; i++)
            cout<<"2 ";
        cout<<"3 ";

    }
    cout<<endl;
    return 0;
}
