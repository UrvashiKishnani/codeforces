#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

typedef long long ll;

using namespace std;

void no() {
    cout<<":(\n";
    exit(0);
}

int main()
{
    boost1; boost2;
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n % 2) {
        no();
    }
    int a;
    int c_a = 0, c_b = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == '(')
            c_a++;
        if(s[i] == ')')
            c_b++;
    }
    if(c_a > n / 2 || c_b > n / 2)
        no();
    a = n / 2 - c_a;
    for(int i = 0; i < n; i++) {
        if(s[i] == '?') {
            if(a)
                s[i] = '(', a--;
            else
                s[i] = ')';
        }
    }
    int x = 0;
    for(int i = 0; i < n - 1; i++) {
        if(s[i] == '(')
            x++;
        else
            x--;
        if(x <= 0)
            no();
    }
    cout<<s<<endl;
    return 0;
}
