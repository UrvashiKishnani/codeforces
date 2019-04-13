#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

typedef long long ll;

using namespace std;

int main()
{
    boost1; boost2;
    int l = 1, r = 1E6;
    while (l != r) {
        int mid = (l + r + 1) / 2;
        cout<<mid<<endl;
        cout<<flush;

        string response;
        cin>>response;
        if(response[0] == '<') {
            r = mid - 1;
        } else {
            l = mid;
        }
    }

    cout<<"! "<<l<<endl;
    cout<<flush;
    return 0;
}
