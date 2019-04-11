#include <iostream>
using namespace std;

int a[20];



int th_sort(int l, int r) {
	if(l == r + 1)
		return 1;
	int ans = 0;
	bool b = true;
	for(int i = l + 1; i < r; i++) {
		if(a[i - 1] > a[i]) {
			b = false;
			break;
		}
	}
	if(b)
		return (r-l);
	else {
		int mid = l + (r - l)/2;
		return max(th_sort(l, mid), th_sort(mid, r));
	}
}

int main() {
    int n;
    cin>>n;
    for(int i = 0; i < n; i++) {
    	cin>>a[i];
    }
    cout<<th_sort(0, n);

    return 0;
}
