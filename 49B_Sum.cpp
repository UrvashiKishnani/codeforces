#include <iostream>

using namespace std;

int main()
{
	int a,b,A[4],B[4],C[5];
	int r=0,c=0,i=0,j=0,max=0;
	int x=0,y=0,ct1=0,ct2=0,s=0,l=0;
	cin>>a>>b;
	x=a;
	y=b;
	while(x>0)
	{
		r=x%10;
		A[i++]=r;
		x/=10;
		if(r>max)
			max=r;
		ct1++;
	}
	i=0;
	while(y>0)
	{
		r=y%10;
		B[i++]=r;
		y/=10;
		if(r>max)
			max=r;
		ct2++;
	}
	max++;
	if(ct1<ct2)
	{
		s=ct1;
		l=ct2;
		for(i=s;i<l;i++)
			A[i]=0;
	}
	else
	{
		s=ct2;
		l=ct1;
		for(i=s;i<l;i++)
			B[i]=0;
	}
	for(i=0;i<l;i++)
	{
		C[i]=A[i]+B[i]+c;
		c=0;
		if(C[i]>=max)
		{
			C[i]-=max;
			c=1;
		}
	}
	if(c==0)
		j=l;
	else
		j=l+1;
	cout<<j;
	return 0;
}
