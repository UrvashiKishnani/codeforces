#include <iostream>
using namespace std;

int main() {
	char x;
	bool f=true,f1=false,f2=false,rs=false,cs=false,fn=false;
	int r,c,cr=0,cc=0,i,j,k;
	char s[1000][1000];
	cin>>r>>c;
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			cin>>s[i][j];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			x=s[i][j];
			if(x=='*')
			{
				if(!f1)
				{
					cr=i;
					cc=j;
					f1=true;
				}
				else if(!f2)  
				{  
					if(i==cr)
						rs=true;
					else if(j==cc)
						cs=true;
					else
					{
						if(!rs&&!cs)
						{
							for(k=j+1;k<c;k++)
								if(s[i][k]=='*')
								{
									fn=true;
									break;
								}
							for(k=cr+1;k<r;k++)
								if(s[k][cc]=='*')
								{
									fn=true;
									break;
								}
							if(fn)
								cr=i;
							else
								cc=j;
						}		
						else if(!rs&&cs)
							cr=i;
						else if(!cs&&rs)
							cc=j;
						else
							f=false;
						f2=true;
					}
				}	
				else if(f&&f1&&f2&&!(i==cr||j==cc))
				{	
					f=false;
					break;
				}
				
			}
		}
		if(!f) break;
	}
	if(f)
	{
		cout<<"YES\n";
		cout<<cr+1<<' '<<cc+1;
	}
	else
		cout<<"NO";
	
	return 0;
}
