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
    int n, x, ans = 0;
    ifstream fin ("input.txt");
    ofstream fout ("output.txt");
    fin>>n>>x;
    int c[n], a[n];
    for(int i = 0; i < n; i++) {
        fin>>c[i];
        a[i] = (n - i) * c[i];
    }
    sort(a, a+n);
    for(int i = 0; i < n; i++) {
        if(a[i] <= x) {
            x -= a[i];
            ans++;
        }
    }
    fout<<ans<<endl;
    fin.close();
    fout.close();
    return 0;
}
