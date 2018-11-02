#include <iostream>
using namespace std;

int main() {
	long n,a,b,c=0,x,ct=0;
	cin>>n>>a>>b;
	while(n--)
	{
		cin>>x;
		if(x==2)
		{
			if(b)
				b--;
			else
				ct+=2;
		}
		else if(x==1)
		{
			if(a)
				a--;
			else if(b)
				b--,c++;
			else if(c)
				c--;
			else
				ct++;
		}
	}
	cout<<ct;
	return 0;
}
