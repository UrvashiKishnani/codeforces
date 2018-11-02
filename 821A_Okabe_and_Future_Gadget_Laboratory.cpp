#include <iostream>
using namespace std;

int main() {
	int n, a[50][50], x;
	bool f;
	cin>>n;
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			cin>>a[i][j];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(a[i][j]==1);
			else
			{
				f=false;
				for(int p=0; p<n; p++)
				{
					for(int q=0; q<n; q++)
					{
						if(a[i][q]+a[p][j] == a[i][j])
						{	
							f=true;
							break;
						}
					}
					if(f)
						break;
				}
			}
			if(!f)
				break;
		}
		if(!f)
			break;
	}
	if(!f)
		cout<<"No";
	else
		cout<<"Yes";
	return 0;
}
