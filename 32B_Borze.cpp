#include <iostream>
using namespace std;

int main() {
	string s;
	cin>>s;
	int a=s.length(),p=0;
	while(p<a)
	{
		if(s[p]=='.')
			cout<<0;
		else if(s[p]=='-')
		{
			p++;
			if(s[p]=='.')
				cout<<1;
			else
				cout<<2;
		}
		p++;
	}
	return 0;
}
