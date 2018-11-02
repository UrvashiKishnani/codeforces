#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int s=0, a[101], m=0, n, i, x;
	cin>>n;
	cin>>x;
	if(x)
	{
		s++;
		a[0]=-1;
	}
	else 
	{
		a[0]=1;
		m=1;
	}	
	for(i=1;i<n;i++)
	{
		cin>>x;
		if(x)
		{
			s++;
			a[i]=a[i-1]-1;
		}
		else
		{
			if(a[i-1]<0)
				a[i]=1;
			else	
				a[i]=a[i-1]+1;
		}	
		m=max(a[i],m);
	}
	if(s==n)
		cout<<(n-1);
	else	
		cout<<(s+m);
	return 0;
}
