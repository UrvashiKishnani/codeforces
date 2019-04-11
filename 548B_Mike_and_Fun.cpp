#include <iostream>
using namespace std;

int main() {
    int n,m,q;
    cin>>n>>m>>q;
    int s[505][505];
    int row_max[505];
    int i,j,k,a,b,max,ct;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            cin>>s[i][j];
    for(i=0;i<n;i++) {
    	max=0;
        for(j=0;j<m;j++) {
        	ct=0;
            while(s[i][j]&&j<m) {
                ct++;
                j++;
            }
            if(ct>max)
            	max=ct;
        }
        row_max[i]=max;
    }
    for(k=0;k<q;k++) {
    	max=0;
        cin>>a>>b;
        s[a-1][b-1]=(!s[a-1][b-1]);
        for(j=0;j<m;j++) {
        	ct=0;
            while(s[a-1][j]&&j<m) {
                ct++;
                j++;
            }
            if(ct>max)
            	max=ct;
        }
        row_max[a-1]=max;
        max=0;
        for(i=0;i<n;i++) {
        	if(row_max[i]>max)
        		max=row_max[i];
        }
    	cout<<max<<endl;
    }

    return 0;
}
