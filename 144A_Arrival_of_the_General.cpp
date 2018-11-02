#include <iostream>
using namespace std;

int main() {
	int n,i,x,l,u,min=100,max=0,lp;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		if(x>max)
		{	
			max=x;
			u=i;
		}	
		if(x<=min)
		{
			min=x;
			l=(n-i-1);
			lp=i;
		}
	}
	if(lp<u)
		cout<<(l+u-1);
	else
		cout<<(l+u);
	return 0;
}
