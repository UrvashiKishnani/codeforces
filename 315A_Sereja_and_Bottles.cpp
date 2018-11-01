#include <iostream>
using namespace std;

int main() {
    int n,a[1000],b[1000],ct=0,i,j;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i]>>b[i];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            {
                if(j==i)
                    continue; 
                else if(a[i]==b[j])
                    {
                        ct++;
                        break;
                    }   
            }   
    cout<<n-ct; 
    return 0;
}
