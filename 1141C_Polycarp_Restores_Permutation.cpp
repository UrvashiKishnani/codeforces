#include <bits/stdc++.h>

using namespace std;

void no() {
    cout<<"-1"<<endl;
    exit(0);
}

int main()
{
    long n;
    cin>>n;
    long a[n - 1];
    vector<long> sol;
    sol.push_back(1);
    long m = 1E6;
    bool b[n-1];
    memset(b, false, n);
    for(long i = 0; i < n-1; i++) {
        cin>>a[i];
    }
    for(long i = 0; i < n-1; i++) {
        long next = sol[i] + a[i];
        if(next < m) {
            m = next;
        }
        if(abs(next) > n)
            no();
        sol.push_back(next);
    }

    if(m < 1) {
        m *= (-1);
        m++;
    } else {
        m = 0;
    }
    for(long i = 0; i < n; i++) {
        sol[i] += m;
        if(sol[i] > n || b[sol[i] - 1])
            no();
        b[sol[i] - 1] = true;
    }

    for(long i = 0; i < n; i++) {
        cout<<sol[i]<<" ";
    }

    return 0;
}
