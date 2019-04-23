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
    string a = "ACTG";
    string b;
    cin>>b;
    int ans = 0, m_ans = 0;
    for(int i = 0; i < 4; i++) {
        ans += min(abs(a[i] - b[i]), 26 - abs(a[i] - b[i]));
    }
    m_ans = ans;
    for(int j = 1; j < n - 3; j++) {
        ans = 0;
        for(int i = 0; i < 4; i++) {
            ans += min(abs(a[i] - b[j + i]), 26 - abs(a[i] - b[j + i]));
        }
        if(ans < m_ans)
            m_ans = ans;
    }
    cout<<m_ans<<endl;
    return 0;
}
