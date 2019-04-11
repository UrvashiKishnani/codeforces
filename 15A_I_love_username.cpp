#include <iostream>
using namespace std;

int main() {
	int n,i,min,max,x,ct=0;
	cin>>n;
	cin>>x;
	min=x;
	max=x;
	for(i=0;i<n-1;i++)
	{
		cin>>x;
		if(x<min)
		{
			min=x;
			ct++;
		}
		if(x>max)
		{
			max=x;
			ct++;
		}
	}
	cout<<ct;
	return 0;
}
