#include <iostream>
using namespace std;

int main() {
	long long int d,k,a,b,t,s=0;
	cin>>d>>k>>a>>b>>t;
	if(k>=d)
		s+=d*a;
	else	
	{
		s=k*a;
		d-=k;
		if((t+k*a)<=(k*b))
		{
			s+=((t+k*a)*(d/k));
			d%=k;
			if((t+d*a)<=(d*b))
				s+=(t+d*a);
			else
				s+=(d*b);
		}
		else
		{
			s+=((k*b)*(d/k));
			d%=k;
			s+=(d*b);
		}
	}
	cout<<s;	
	return 0;
}
