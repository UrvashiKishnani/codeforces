#include <bits/stdc++.h>

using namespace std;

int main()
{
    long n, a = 0, d = 0;
    char s;
    cin>>n;
    for(long i = 0; i < n; i++) {
        cin>>s;
        if(s == 'A')
            a++;
        else if(s == 'D')
            d++;
    }
    if(a == d)
        cout<<"Friendship\n";
    else
        (a>d) ? cout<<"Anton\n" : cout<<"Danik\n";

    return 0;
}
