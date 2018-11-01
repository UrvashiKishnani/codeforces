#include <iostream>
using namespace std;


int main() {
    long long int n,m,a,d1,d2,res;
    cin>>n>>m>>a;
    if(n%a==0)
        d1=n/a;
    else
        {
            d1=n/a;
            d1++;
        }
    if(m%a==0)
        d2=m/a;
    else
        {
            d2=m/a;
            d2++;
        }   
    res=d1*d2;
    cout<<res;
    return 0;
}
