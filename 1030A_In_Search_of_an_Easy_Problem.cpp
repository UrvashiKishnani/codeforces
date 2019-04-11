#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    bool f = true;
    cin>>n;
    while(n--) {
        int x;
        cin>>x;
        if(x)
            f = false;
    }

    if(f)
        cout<<"EASY\n";
    else
        cout<<"HARD\n";
    return 0;
}
