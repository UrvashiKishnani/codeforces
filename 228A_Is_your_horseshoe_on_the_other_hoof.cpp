#include <iostream>
#include <set>
using namespace std;

int main() {
	set<long long int> s;
	long long int x;
	for(int i=0;i<4;i++)
	{
		cin>>x;
		s.insert(x);
	}
	cout<<(4-s.size());
	return 0;
}
