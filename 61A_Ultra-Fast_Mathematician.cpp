#include <iostream>
using namespace std;

int main() {
	char a[101],b[101],c[101];
	int i,l;
	cin>>a>>b;
	for(l=0;a[l]!='\0';l++);
	for(i=0;i<l;i++)
	{
		if(a[i]==b[i])
			c[i]='0';
		else
			c[i]='1';
	}
	c[i]='\0';
	cout<<c;
	return 0;
}
