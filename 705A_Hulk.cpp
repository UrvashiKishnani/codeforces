#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    cout<<"I hate ";
    n--;
    while(n) {
        cout<<"that I love ";
        n--;
        if(n) {
            cout<<"that I hate ";
            n--;
        }
    }
    cout<<"it\n";

    return 0;
}
