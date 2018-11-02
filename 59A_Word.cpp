#include <iostream>
#include <ctype.h>

using namespace std;

int main() {
	string s;
	int i,l=0,u=0;
	cin>>s;
	for(i=0;i<s.length();i++)
	{
		if(isupper(s[i]))
			u++;
		else
			l++;
	}
	if(l>=u)
		for(i=0;i<s.length();i++)
			s[i]=tolower(s[i]);
	else
		for(i=0;i<s.length();i++)
			s[i]=toupper(s[i]);
	cout<<s;		
	return 0;
}
