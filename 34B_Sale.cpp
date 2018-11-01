#include <iostream>
using namespace std;

int main() {
    int n,m,a[100],i,j,ct=0,x,sum=0,t;
    cin>>n>>m;
    for(i=0;i<n;i++)
        {
            cin>>x;
            if(x<0)
                a[ct++]=x;
        }
    if(ct<=m)
        {
            for(i=0;i<ct;i++)
                sum+=a[i];
        }
    else
        {
            for(i=0;i<ct-1;i++)
                for(j=0;j<ct-i-1;j++)
                    if(a[j]>a[j+1])
                        {
                            t=a[j];
                            a[j]=a[j+1];
                            a[j+1]=t;
                        }
            for(i=0;i<m;i++)
                sum+=a[i];
        }
    sum*=-1;    
    cout<<sum;  
    return 0;
}
