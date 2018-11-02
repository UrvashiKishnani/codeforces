#include<iostream>
#include <math.h>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	int a, b, n, i, x, y, v;
	float d, m=10000000;
	cin>>a>>b>>n;
	for(i=0;i<n;i++)
	{
		cin>>x>>y>>v;
		d=sqrt(pow((a-x),2)+pow((b-y),2));
		d=d/v;
		m=min(m,d);
		
	}
	cout<<fixed<<setprecision(20)<<m;
	return 0;
}
