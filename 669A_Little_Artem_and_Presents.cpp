#include <iostream>
using namespace std;

int main() {
	long long int n,ct=0;
	cin>>n;
	ct+=2*(n/3);
	if(n%3!=0)
		ct++;
	cout<<ct;	
	return 0;
}
