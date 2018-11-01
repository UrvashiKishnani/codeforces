#include <iostream>
using namespace std;

int lucky(int a);

int main() {
    int n,i;
    cin>>n;
    if(lucky(n)){cout<<"YES"; return 0;}
    for(i=1;i<n;i++)
        {
            if(n%i==0)
                if(lucky(i)){cout<<"YES"; return 0;}
        }
    cout<<"NO"; 
    return 0;
}

int lucky(int a) {
    int d,f=1;
    do
    {
        d=a%10;
        a/=10;
        if(d!=4&&d!=7)
            {
                f=0;
                break;
            }
    }while(a!=0);
    if(f) return 1;
    else return 0;
}
