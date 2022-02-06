#include<iostream>
using namespace std;
int main()
{
    int i,n,c=0;
    cin>>n;
    string s;
    for(i=0; i<n; i++)
    {
        cin>>s;
        if(s[0]=='T')
            c=c+4;
        else if(s[0]=='D')
            c=c+12;
        else if(s[0]=='O')
            c=c+8;
        else if(s[0]=='C')
            c=c+6;
        else if(s[0]=='I')
            c=c+20;

    }
    cout<<c<<endl;
}
