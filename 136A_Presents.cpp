#include <iostream>
using namespace std;

int main() {
    int n,i,c;
    int a[100],b[100];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        {
            c=a[i];
            b[c-1]=i+1;
        }   
    for(i=0;i<n;i++)
        cout<<b[i]<<" ";
    return 0;
}
