#include <iostream>
using namespace std;

int main() {
    char a[10][10];
    int r,c,i,j,n=0,ctr=0,ctc=0,R,C;
    cin>>r>>c;
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            cin>>a[i][j];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            if(a[i][j]=='S')
                {
                ctr++;
                break;
                }
    }
    for(i=0;i<c;i++)
        {
            for(j=0;j<r;j++)
                if(a[j][i]=='S')
                    {
                    ctc++;
                    break;
                    }
        }
    R=r-ctr;
    C=c-ctc;
    n=R*c+C*r-C*R;
    cout<<n;
    return 0;
}
