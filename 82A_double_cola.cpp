#include <iostream>
using namespace std;

int main() {
    long unsigned int n,i=1,p=1,s=0,r,a;
    cin>>n;
    while(s<n)
        {
            s+=5*p;
            p*=2;
            i++;
        }
    p/=2;   
    r=s-n;
    a=r/p;
    if(a==0)
        cout<<"Howard";
    else if(a==1)
        cout<<"Rajesh";
    else if(a==2)
        cout<<"Penny";
    else if(a==3)
        cout<<"Leonard";
    else
        cout<<"Sheldon";
    return 0;
}
