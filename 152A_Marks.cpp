#include <iostream>
using namespace std;

int main() {
    int n,m,i,j,c[100],ct=0;
    char d,max;
    string a[100];
    cin>>n>>m;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        c[i]=0;
    for(i=0;i<m;i++)
        {
            max='0';
            for(j=0;j<n;j++)
                {
                    d=a[j][i];
                    if(d>max)
                        max=d;
                }
            for(j=0;j<n;j++)
                {
                    if(a[j][i]==max)
                        c[j]=1;
                }
        }
    for(i=0;i<n;i++)
        ct+=c[i];
    cout<<ct;
    return 0;
}
