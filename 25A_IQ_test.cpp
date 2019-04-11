#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int ce = 0, pe = -1, co = 0, po = -1;
    for(int i = 0; i < n; i++) {
        int x;
        cin>>x;
        if(x % 2) {
            co++;
            po = i + 1;
        }
        else {
            ce++;
            pe = i + 1;
        }
    }
    if(co == 1)
        cout<<po<<endl;
    else
        cout<<pe<<endl;
    return 0;
}
