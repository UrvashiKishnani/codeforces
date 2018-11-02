#include <iostream>
using namespace std;

int main() {
	int t;
	long x;
	bool f=false;
	cin>>t;
	while(t--)
	{
		cin>>x;
		if(x==1)
			f=true;
	}
	if(f)
		cout<<-1;
	else
		cout<<1;
	return 0;
}
