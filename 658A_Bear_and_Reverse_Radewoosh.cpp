#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

using namespace std;

int main()
{
    boost1; boost2;
    int n, c;
    cin>>n>>c;
    int p[n], t[n];
    long lp = 0, rp = 0, lt = 0, rt = 0;
    for(int i = 0; i < n; i++) {
        cin>>p[i];
    }
    for(int i = 0; i < n; i++) {
        cin>>t[i];
    }
    for(int i = 0, j = n-1; i < n; i++, j--) {
        lt += t[i];
        rt += t[j];
        lp += max(0L, p[i] - c * lt);
        rp += max(0L, p[j] - c * rt);
    }
    if(lp > rp)
        cout<<"Limak\n";
    else if(lp < rp)
        cout<<"Radewoosh\n";
    else
        cout<<"Tie\n";
    return 0;
}
