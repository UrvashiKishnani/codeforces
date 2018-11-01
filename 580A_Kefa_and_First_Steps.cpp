#include <iostream>
using namespace std;

int main() {
    unsigned long int n, a[100000];
    int i, max=1, ct=1;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n-1;i++)
        {
            while((a[i]<=a[i+1])&&(i<n-1))
                {
                    ct++;
                    i++;
                }
            if(ct>max) max=ct;
            ct=1;
        }
    cout<<max;
    return 0;
}
