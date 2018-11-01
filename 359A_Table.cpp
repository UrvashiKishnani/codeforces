#include <iostream>
using namespace std;

int main() {
	int n,m,c,i,j,f=0;
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>c;
			if(c==1&&(i==0||i==(n-1)||j==0||j==(m-1)))
			{
				f=1;
				break;
			}	
		}
		if(f)
			break;
	}		
	if(f)
		cout<<2;
	else
		cout<<4;
	return 0;
}
