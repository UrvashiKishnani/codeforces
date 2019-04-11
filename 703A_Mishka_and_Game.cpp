#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

using namespace std;

int main()
{
    boost1; boost2;
    int n;
    cin>>n;
    int m = 0, c = 0;
    for(int i = 0; i < n; i++) {
        int a, b;
        cin>>a>>b;
        if(a > b)
            m++;
        else if(b > a)
            c++;
    }
    if(m > c)
        cout<<"Mishka"<<endl;
    else if(c > m)
        cout<<"Chris"<<endl;
    else
        cout<<"Friendship is magic!^^"<<endl;
    return 0;
}
