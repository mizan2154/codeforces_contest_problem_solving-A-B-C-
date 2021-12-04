#include<iostream>
using namespace std;

int main()
{
    int p,i,h=0,e=0,l=0,o=0;
    string str;
    cin>>str;
    p=str.length();
    for(i=0;i<=p;i++)
    {
        if(str[i]=='h')
            h++;
        else if(str[i]=='e' && h>0)
            e++;
        else if(str[i]=='l' && e>0)
            l++;
        else if(str[i]=='o' && l>1)
            o++;
    }
    if(o>0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

