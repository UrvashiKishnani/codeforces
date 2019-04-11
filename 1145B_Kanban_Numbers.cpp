#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a = n % 10;
    if(a == 1 || a == 7 || a == 9) {
    	cout<<"NO\n";
    	return 0;
    }
    if(n == 11 || n == 12) {
    	cout<<"YES\n";
    	return 0;
    }
    a = n / 10;
    if(a == 1 || a == 2 || a == 7 || a == 9) {
    	cout<<"NO\n";
    	return 0;
    }
    cout<<"YES\n";
    return 0;
}
