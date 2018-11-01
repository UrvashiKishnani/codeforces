#include <iostream>
#include<string.h>
using namespace std;

int main() {
    char s[81],t[11];
    char b[10][11];
    int i,j;
    cin>>s;
    for(i=0;i<10;i++)
            cin>>b[i];
    for(i=0;i<8;i++)    
        {
            for(j=0;j<10;j++)
                    t[j]=s[i*10+j];
                t[10]='\0';
                if(strcmp(t,b[0])==0)
                    cout<<'0';
                else if(strcmp(t,b[1])==0)
                    cout<<'1';
                else if(strcmp(t,b[2])==0)
                    cout<<'2';
                else if(strcmp(t,b[3])==0)
                    cout<<'3';
                else if(strcmp(t,b[4])==0)
                    cout<<'4';
                else if(strcmp(t,b[5])==0)
                    cout<<'5';
                else if(strcmp(t,b[6])==0)
                    cout<<'6';
                else if(strcmp(t,b[7])==0)
                    cout<<'7';
                else if(strcmp(t,b[8])==0)
                    cout<<'8';
                else if(strcmp(t,b[9])==0)
                    cout<<'9';
        }       
    return 0;
}
