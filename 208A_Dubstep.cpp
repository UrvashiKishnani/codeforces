#include <iostream>
using namespace std;

int main() {
    string s;
    cin>>s;
    int i=0;
    while(s[i]!='\0')
        {
            if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
                i+=3;
            else
                {
                    while(!(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')&&s[i]!='\0')
                        cout<<s[i++];
                    cout<<" ";
                }
        }
    return 0;
}
