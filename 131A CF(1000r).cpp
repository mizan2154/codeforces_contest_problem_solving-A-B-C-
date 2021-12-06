#include<iostream>
using namespace std;

int main()
{
    int i,l,c=0;
    string s;
    cin>>s;
    l=s.length();
    if(l==1 && s[0]>=97)
    {
        s[0]-=32;
        cout<<s<<endl;
    }
    else if(l==1 && s[0]<97)
    {
        s[0]+=32;
        cout<<s<<endl;
    }
    else
    {
        for(i=1; i<l; i++)
        {
            if(s[i]<97)
                c++;
        }
        if(s[0]>=97 && c==0)
        {
            cout<<s<<endl;
        }
        else if(s[0]<97 && c==0)
        {
            cout<<s<<endl;
        }
        else if(s[0]>=97 && c==l-1)
        {
            s[0]-=32;
            for(i=1; i<l; i++)
            {
                s[i]+=32;
            }
            cout<<s<<endl;
        }
        else if(s[0]<97 && c==l-1)
        {

            for(i=0; i<l; i++)
            {
                s[i]+=32;
            }
            cout<<s<<endl;
        }
        else
        {
            cout<<s<<endl;

        }
    }




}
