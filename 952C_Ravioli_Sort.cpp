#include <iostream>
using namespace std;

int main() {
	int n, x, y, f=0;
	cin>>n;
	cin>>x;
	for(int i=1; i<n; i++)
	{
		cin>>y;
		if((x-y)>=2 || (x-y)*(-1)>=2)
		{
			f=1;
			break;
		}
		x=y;
	}	
	if(f)
		cout<<"NO";
	else
		cout<<"YES";
	return 0;
}
