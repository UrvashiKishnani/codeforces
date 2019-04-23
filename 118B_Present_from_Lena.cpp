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
    for(int i = 0; i <= n; i++) {
        for(int k = i; k < n; k++) {
            cout<<"  ";
        }
        if(i == 0)
            cout<<i;
        else {
            for(int j = 0; j <= i; j++) {
                cout<<j<<" ";
            }
        }
        if((i - 1) >= 0)
            cout<<(i - 1);
        for(int j = i - 2; j >= 0; j--) {
            cout<<" "<<j;
        }
        cout<<endl;
    }
    for(int i = n - 1; i >= 0; i--) {
        for(int k = i; k < n; k++) {
            cout<<"  ";
        }
        if(i == 0)
            cout<<i;
        else {
            for(int j = 0; j <= i; j++) {
                cout<<j<<" ";
            }
        }
        if((i - 1) >= 0)
            cout<<(i - 1);
        for(int j = i - 2; j >= 0; j--) {
            cout<<" "<<j;
        }
        cout<<endl;
    }
    return 0;
}
