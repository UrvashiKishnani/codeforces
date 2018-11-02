#include <iostream>
using namespace std;

int main() {
	int n, k, l, c, d, p, nl, np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int tot_ltr=(k*l)/nl;
	int tot_slice=c*d;
	int tot_salt=p/np;
	cout<<min(tot_ltr,min(tot_slice,tot_salt))/n;
	return 0;
}
