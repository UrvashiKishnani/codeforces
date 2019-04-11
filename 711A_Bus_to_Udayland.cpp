#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    char s[n][5];
    bool f = false;
    for(int i = 0; i < n; i++) {
        char a, b, x, c, d;
        cin>>a>>b>>x>>c>>d;
        if(a == 'O' && b == 'O' && !f) {
            a = '+';
            b = '+';
            f = true;
        }
        if(c == 'O' && d == 'O' && !f) {
            c = '+';
            d = '+';
            f = true;
        }
        s[i][0] = a;
        s[i][1] = b;
        s[i][2] = x;
        s[i][3] = c;
        s[i][4] = d;
    }
    if(f) {
        cout<<"YES\n";
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < 5; j++)
                cout<<s[i][j];
            cout<<endl;
        }
    }
    else
        cout<<"NO\n";


    return 0;
}
