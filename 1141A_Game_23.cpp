#include <iostream>

using namespace std;

int main()
{
    long n, m, ct = 0;
    cin>>n>>m;

    if(m % n != 0) {
        cout<<"-1"; return 0;
    }

    while(n % 2 == 0 && m % 2 == 0) {
        n /= 2;
        m /= 2;
    }

    while(n % 3 == 0 && m % 3 == 0) {
        n /= 3;
        m /= 3;
    }

    while(m % 2 == 0 && m > n) {
        m /= 2; ct++;
    }
    while(m % 3 == 0 && m > n) {
        m /= 3; ct++;
    }

    if(m == n)
        cout<<ct<<endl;
    else
        cout<<"-1"<<endl;
    return 0;
}
