#include <iostream>
using namespace std;

int main() {
	char a[50][50];
	int n,m,n0,n1,m0,m1,i,j;
	cin>>n>>m;
	n0=n;
	n1=0;
	m0=m;
	m1=0;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		{
			cin>>a[i][j];
			if(a[i][j]=='*')
			{	
				if(i>n1)
					n1=i;
				if(j>m1)
					m1=j;
				if(i<n0)	
					n0=i;
				if(j<m0)	
					m0=j;
			}
		}	
		
	for(i=n0;i<=n1;i++)
	{
		for(j=m0;j<=m1;j++)
			cout<<a[i][j];
		cout<<endl;	
	}	
	
	return 0;
}
