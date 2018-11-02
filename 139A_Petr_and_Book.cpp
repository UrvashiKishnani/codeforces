#include <iostream>
using namespace std;

int main() {
	int n,i,x,s=0,a[7];
	cin>>n;
	for(i=0;i<7;i++)
		cin>>a[i];
	while(s<n)
	{
		for(i=0;i<7;i++)
		{
			s+=a[i];
			if(s>=n)
			{
				cout<<i+1;
				break;
			}
		}
	}
	return 0;
}
