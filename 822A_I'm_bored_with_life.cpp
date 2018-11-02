#include <iostream>
using namespace std;

int main() {
	long a,b,c=1;
	cin>>a>>b;
	if(a<b)
		for(int i=2;i<=a;i++)
			c*=i;
	else
		for(int i=2;i<=b;i++)
			c*=i;
	cout<<c;
	return 0;
}
