#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

typedef unsigned long long ll;

using namespace std;

int main()
{
    boost1; boost2;
    string s;
    cin>>s;
    int c = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'a')
            c++;
    }
    cout<<min(int(s.size()), c * 2 - 1);
    return 0;
}
