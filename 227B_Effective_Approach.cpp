#include <iostream>
using namespace std;

int main() {
	int n,m,i,pos[100005],x;
	cin>>n;
	long long v=0,p=0;
	for(i=0;i<n;i++)
	{
		cin>>x;
		pos[x]=i+1;
	}
	cin>>m;
	for(i=0;i<m;i++)
	{
		cin>>x;
		v+=pos[x];
		p+=(n-pos[x]+1);
	}
	cout<<v<<" "<<p;
	return 0;
}
