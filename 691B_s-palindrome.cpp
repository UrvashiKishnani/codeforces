#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	string s;
	bool f=true;
	string b[25];
	int i=0,j,k;
	b[i++]="AA";
	b[i++]="HH";
	b[i++]="II";
	b[i++]="MM";
	b[i++]="OO";
	b[i++]="TT";
	b[i++]="UU";
	b[i++]="VV";
	b[i++]="WW";
	b[i++]="XX";
	b[i++]="YY";
	b[i++]="oo";
	b[i++]="vv";
	b[i++]="ww";
	b[i++]="xx";
	b[i++]="bd";
	b[i++]="pq";
	b[i++]="db";
	b[i++]="qp";
	int n=i;
	cin>>s;
	for(i=0,j=s.length()-1;i<j;i++,j--)
	{
		f=false;
		for(k=0;k<n;k++)
			if(s[i]==b[k][0]&&s[j]==b[k][1])
			{
				f=true;
				break;
			}
		if(!f) break;			
	}
	
	if(!f) printf("NIE");
	else if(i!=j) printf("TAK");
	else if(i==j)
	{	for(k=0;k<n-4;k++)
			if(s[i]==b[k][0]) f=false;
		if(!f) printf("TAK");
		else printf("NIE");
	}
	return 0;
}
