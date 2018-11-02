#include <iostream>
using namespace std;

int main() {
	int n,i,s=0,rem,x,ct=0,f=5;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		s+=x;
	}
	rem=s%(n+1);
//	cout<<s<<endl;
//	cout<<rem<<endl;
//	cout<<n<<endl;
	if(rem==1)
		ct+=(f/(n+1));
	else
	{
		if(rem)
			f=f-(n+1-rem);
		if(f>0)
		{
			ct++;
			f--;
			ct+=(f/(n+1));
		}
	}
	cout<<5-ct;
	return 0;
}
