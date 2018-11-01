#include <iostream>
using namespace std;

int main() {
	int n,p,q,i,ct=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>p>>q;
		if((q-p)>1)
			ct++;
	}
	cout<<ct;
	return 0;
}
