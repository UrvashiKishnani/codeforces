#include <iostream>
using namespace std;

int main() {
	int n,cl=0,cr=0,s=0,x,y,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x>>y;
		if(x) cl++;
		if(y) cr++;
	}
	if(cl<=(n/2))
		s+=cl;
	else
		s+=(n-cl);
	if(cr<=(n/2))
		s+=cr;
	else
		s+=(n-cr);
	cout<<s;
	
	return 0;
}
