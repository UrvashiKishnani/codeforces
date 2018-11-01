#include <iostream>
using namespace std;

int main() {
    string a;
    int i,f=0;
    cin>>a;
    for(i=0;a[i]!='\0';i++)
        {
            if(a[i]=='H'||a[i]=='Q'||a[i]=='9')
                {
                    f=1;
                    break;
                }
                
        }
    if(f)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
