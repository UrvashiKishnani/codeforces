#include <iostream>
using namespace std;

int main() {
	long long int x,y,px,py,a,b,sx=0,sy=0,min,ct=0;
	int k,i,fx=1,fy=1;
	cin>>x>>y>>px>>py>>k;
	
	for(i=0;i<k;i++)
	{
		cin>>a>>b;
		
		if(a>0)
			sx=(x-px)/a;
		else if(a<0)
			sx=(-1)*(px-1)/a;
		else
			fx=0;
		if(b>0)
			sy=(y-py)/b;
		else if(b<0)
			sy=(-1)*(py-1)/b;
		else
			fy=0;
			
		if(fx&&fy)
		{
			if(sx<=sy)
				min=sx;
			else
				min=sy;
			ct+=min;
			px+=a*min;
			py+=b*min;
		}
		else if(!fx)
		{
			ct+=sy;
			py+=b*sy;
		}
		else if(!fy)
		{
			ct+=sx;
			px+=a*sx;
		}
		fx=fy=1;
	}
	cout<<ct;
	return 0;
}
