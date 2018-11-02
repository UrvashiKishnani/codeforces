#include <iostream>
using namespace std;

int main() {
	int n,i,no=0,x;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		if(x%2)
			no++;
	}
	if(no%2)
	{
		cout<<no;
	}
	else
		cout<<(n-no);
	return 0;
}
