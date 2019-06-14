#include &lt;bits/stdc++.h&gt;

#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)

typedef long long ll;

using namespace std;

int main()
{
    boost1; boost2;
    int n;
    cin&gt;&gt;n;
    int p1 = 1, p2 = 2, s = 3;
    for(int i = 0; i &lt; n; i++) {
        int w;
        cin&gt;&gt;w;
        if(w == p1) {
            swap(p2, s);
        } else if(w == p2) {
            swap(p1, s);
        } else {
            cout&lt;&lt;&quot;NO\n&quot;;
            return 0;
        }
    }
    cout&lt;&lt;&quot;YES\n&quot;;
    return 0;
}