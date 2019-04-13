#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

typedef long long ll;

using namespace std;

int main()
{
    boost1; boost2;
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    int l = 0, r = n-1;
    int s = 0, d = 0;
    bool sec = false;
    while(l <= r) {
        if(sec) {
            if(a[l] > a[r]) {
                d += a[l];
                l++;
            } else {
                d += a[r];
                r--;
            }
            sec = false;
        } else {
            if(a[l] > a[r]) {
                s += a[l];
                l++;
            } else {
                s += a[r];
                r--;
            }
            sec = true;
        }
    }
    cout<<s<<" "<<d<<endl;
    return 0;
}
