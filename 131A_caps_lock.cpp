#include <iostream>
#include<ctype.h>
using namespace std;
 
int main() {
    string a;
    int i,n,ct,f;
    f=ct=0;
    cin>>a;
    n=a.size();
    if(islower(a[0]))
        {
            for(i=1;i<n;i++)
                {
                    if(isupper(a[i]))
                            ct++;
                }
            if(ct==(n-1))
                {
                    a[0]=toupper(a[0]);
                    for(i=1;i<n;i++)
                    a[i]=tolower(a[i]); 
                }
        }
    else
        {
            for(i=0;i<n;i++)
                {
                    if(isupper(a[i]))
                        ct++;
                    if(ct==n)
                        {
                            for(i=0;i<n;i++)
                                a[i]=tolower(a[i]);
                        }
                }
        }       
    
    cout<<a;
    return 0;
}
