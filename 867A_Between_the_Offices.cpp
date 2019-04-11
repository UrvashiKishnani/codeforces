#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a = 0, b = 0;
    string x;
    cin>>x;
    for(long i = 0; i < n - 1; i++) {
        if(x[i] == 'S' && x[i+1] == 'F')
            a++;
        else if(x[i] == 'F' && x[i+1] == 'S')
            b++;
    }
    if(a > b)
        cout<<"YES\n"<<endl;
    else
        cout<<"NO\n"<<endl;
    return 0;
}
