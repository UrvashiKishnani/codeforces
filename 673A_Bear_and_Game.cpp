#include <iostream>
using namespace std;

int main() {
	int n,a,b,d,i,f;
	cin>>n;
	a=f=0;
	for(i=0;i<n;i++)
	{
		cin>>b;
		d=b-a;
		if(d>15)
		{
			cout<<a+15;
			return 0;
		}
		a=b;
	}
	d=90-b;
	if(d>15)
		cout<<b+15;
	else
		cout<<"90";
	return 0;
}
