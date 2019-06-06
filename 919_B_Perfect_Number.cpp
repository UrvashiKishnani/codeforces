#include <bits/stdc++.h>

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

typedef unsigned long long ll;

using namespace std;

int s(int x) {
    int sum = 0;
    while(x) {
        sum += (x%10);
        x /= 10;
    }
    return sum;
}

int main()
{
    boost1; boost2;
    int k, c = 0;
    cin>>k;
    int i = 19;
    while(true) {
        int ans = s(i);
        if(s(i) == 10) {
            c++;
            if(c == k) {
                cout<<i<<endl;
                exit(0);
            }
        }
        i++;
    }
    return 0;
}
