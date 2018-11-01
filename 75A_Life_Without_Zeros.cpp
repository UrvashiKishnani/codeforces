#include <iostream>
using namespace std;

long long int nz(long long int);

int main() {
    long long int a,b,c,d,p,q;
    cin>>a>>b;
    p=a+b;
    c=d=q=0;
    c=nz(a);
    d=nz(b);
    q=nz(p);
    if((c+d)==q)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}

long long int nz(long long int num) {
    long long int res=0;
    int r,i=1;
    while(num>0)
    {
        r=num%10;
        if(r>0)
            {
                res+=r*i;
                i*=10;
            }
        num/=10;
    }
    return res;
}
