#include <iostream>
#include <math.h>
using namespace std;

int prime(int p) {
	int i,ct=0;
	for(i=2;i<=sqrt(p);i++)
		if(p%i==0) return 0;
	return 1;
}	

int main() {
	int m,n,p;
	cin>>n>>m;
	p=n+1;
	while(p<=m)
	{
		if(prime(p))
			break;
		p++;
	}
	if(p==m)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
