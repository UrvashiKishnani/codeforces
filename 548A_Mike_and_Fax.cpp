#include <iostream>
using namespace std;

int main() {
    string s;
    int n,i;
    cin>>s>>n;
    int l,a,k;
    l=s.size();
    a=l/n;
    i=0;
    int f=1;
    if(l%n!=0) {cout<<"NO"; return 0;}
    for(int j=1;j<=n;j++)
        {
            for(k=a*j-1;i<((a*j)-1);i++,k--)
            {
                if(s[i]!=s[k])
                    {f=0;}
            }
            i++;
            
        }
    if(f)
        cout<<"YES";
        else cout<<"NO";
    return 0;
}
