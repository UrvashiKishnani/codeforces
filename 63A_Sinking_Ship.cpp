#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char x[11],y[8],cap[11];
    char m[100][11];
    char w[100][11];
    int n,i,j,ctm=0,ctw=0;
    cin>>n;
    for(i=0;i<n;i++)
        {
            cin>>x>>y;
            if(strcmp(y,"rat")==0)
                cout<<x<<endl;
            else if(strcmp(y,"woman")==0||strcmp(y,"child")==0)
                strcpy(w[ctw++],x);
            else if(strcmp(y,"man")==0) 
                strcpy(m[ctm++],x);
            else
                strcpy(cap,x);
        }
    for(i=0;i<ctw;i++)
        cout<<w[i]<<endl;
    for(i=0;i<ctm;i++)
        cout<<m[i]<<endl;
    cout<<cap;  
    return 0;
}
