#include <iostream>
using namespace std;

int main() {
    unsigned long int x, ct=1;
    cin>>x;
    while(x>1)
    {
        if(x%2==0)
            x/=2;
        else
            {
                x--;
                ct++;
            }
    }
    cout<<ct;
    return 0;
}
