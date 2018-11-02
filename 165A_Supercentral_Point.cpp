#include <bits/stdc++.h>
using namespace std;

int main() {
	int p[200][2],n,i,j,ct=0;
	bool b[200][4];
	memset(b,false,sizeof b);
	cin>>n;
	for(i=0;i<n;i++)
		cin>>p[i][0]>>p[i][1];
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{
			if(p[i][0]>p[j][0]&&p[i][1]==p[j][1])
			{
				b[j][0]=true;
				b[i][1]=true;
			}
			else if(p[i][0]<p[j][0]&&p[i][1]==p[j][1])
			{
				b[j][1]=true;
				b[i][0]=true;
			}
			else if(p[i][0]==p[j][0]&&p[i][1]<p[j][1])
			{
				b[j][2]=true;
				b[i][3]=true;
			}
			else if(p[i][0]==p[j][0]&&p[i][1]>p[j][1])
			{
				b[j][3]=true;
				b[i][2]=true;
			}
		}
	for(i=0;i<n;i++)
		if(b[i][0]&&b[i][1]&&b[i][2]&&b[i][3])
			ct++;
	cout<<ct;
	return 0;
}
