#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int l, r, a, c, x;
	cin >> l >> r >> a;
	x = min(l, r);
	l -= x; r -= x;
	c = x * 2;
	x = max(l, r);
	x = min(x, a);
	a -= x;
	c += x * 2;
	if (a)
		c += 2*(a / 2);
	cout << c;
	return 0;
}
