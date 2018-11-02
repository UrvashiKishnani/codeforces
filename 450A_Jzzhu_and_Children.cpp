#include <iostream>
using namespace std;

int main() {
	int n,m,i,ans,x,max=0,num;
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		cin>>x;
		num=0;
		num=x/m;
		if(x%m)
			num++;
		if(num>=max)
		{
			max=num;
			ans=i+1;
		}
	}
	cout<<ans;
	return 0;
}
