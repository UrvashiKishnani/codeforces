#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int n,i=1,j,c=0,f;
    char x[33];
    struct acc
    {
        char s[33];
        int ct;
    };
    acc a[100000];
    
    cin>>n;
    cin>>a[c++].s;
    cout<<"OK"<<endl;
    
    while(i<n)
    {
        cin>>x;
        f=0;
        for(j=0;j<=c;j++)
            {
                if(strcmp(a[j].s,x)==0)
                    {
                        a[j].ct++;
                        cout<<a[j].s<<a[j].ct<<endl;
                        f=1;
                        break;
                    }   
            }
        if(!f)
            {
                strcpy(a[c++].s,x);
                cout<<"OK"<<endl;
            }
        i++;    
    }
    
    return 0;
}
