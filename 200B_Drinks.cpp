#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int n,i;
	float x,s=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		s+=x;
	}
	cout<<fixed;
	cout<<setprecision(12)<<s/n;
	return 0;
}
