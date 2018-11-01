#include <iostream>
using namespace std;

int main() {
	long long int n,a,i,max=0,s=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a;
		if(a>max)
			max=a;
		s+=a;
	}
	s-=max;
	if(s==max)
		cout<<1;
	else
		cout<<max-s+1;
	
	return 0;
}
