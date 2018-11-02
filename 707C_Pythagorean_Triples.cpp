#include <iostream>
using namespace std;

int main() {
	long long n,a,b;
	cin>>n;
	if(n<3)
		cout<<-1;
	else
	{
		if(n%2==0)
		{
			a=((n/2)*(n/2))-1;
			b=((n/2)*(n/2))+1;
		}
		else
		{
			a=(n*n-1)/2;
			b=(n*n+1)/2;
		}
		cout<<a<<' '<<b;
	}
	return 0;
}
