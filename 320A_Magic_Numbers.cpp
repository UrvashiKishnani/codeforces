#include <iostream>
using namespace std;

int main() 
{
	string a;
	bool f=true;
	cin>>a;
	int i=0;
	if(a[0]!='1')
		f=false;
	else
	{
		while(i<a.length())
		{
			if(a[i]!='1'&&a[i]!='4')
			{
				f=false;
				break;
			}
			else if(a[i]=='1')
			{
				i++;
				while(a[i]=='1')
					i++;
				if(a[i]=='\0')
					break;
				else if(a[i]=='4'&&(a[i+1]=='\0'||a[i+1]=='1'))
					i++;
				else if(a[i]=='4'&&a[i+1]=='4'&&(a[i+2]=='\0'||a[i+2]=='1'))
					i+=2;
				else
				{
					f=false;
					break;
				}
			}
		}
	}
	if(f)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
