#include <iostream>
using namespace std;

int main() {
	int a,b,n,i,f=2,g,r;
	cin>>a>>b>>n;
	r=n;
	while(f==2)
		{
			for(i=1;i<=a;++i)
					if((a%i==0)&&(r%i==0))
						g=i;	
			if(g>r)
				{
					f=1;
					break;
				}	
			else
				r-=g;			
			for(i=1;i<=b;++i)
					if((b%i==0)&&(r%i==0))
						g=i;
			if(g>r)
				{
					f=0;
					break;
				}	
			else
				r-=g;	
		}
	cout<<f;	
	return 0;
}
