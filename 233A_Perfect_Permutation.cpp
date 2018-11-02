#include <iostream>
using namespace std;

int main() {
	int n,x=2;
	cin>>n;
	if(n%2!=0)
		cout<<-1;
	else
		while(x<=n)
		{
			cout<<x--<<' ';
			cout<<x<<' ';
			x+=3;
		}
	return 0;
}
