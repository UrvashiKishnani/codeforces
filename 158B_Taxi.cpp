#include <iostream>
using namespace std;

int main() {
	long int n,i,ct1=0,ct2=0,ct3=0,ct4=0;
	int x;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		if(x==1)
			ct1++;
		else if(x==2)
			ct2++;
		else if(x==3)
			ct3++;
		else if(x==4)
			ct4++;
	}
	ct4+=ct3;
	
	if(ct1>ct3)
		ct1-=ct3;	
	else
		ct1=0;
		
	ct4+=(ct2/2);
	
	if(ct2%2==1)
	{
		ct4++;
		ct1-=2;
	}
	
	if(ct1>=1)
	{
		if(ct1>4)
		{
			ct4+=(ct1/4);
			ct1%=4;
			if(ct1>=1)
				ct4++;
		}	
		else
			ct4++;
	}	
	
	cout<<ct4;
	return 0;
}
