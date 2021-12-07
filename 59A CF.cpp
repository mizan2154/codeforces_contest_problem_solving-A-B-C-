#include<iostream>
using namespace std;
int main()
{
    int l,a,b,c=0,d=0;
    string s;
    cin>>s;
    l=s.length();
    for(int i=0;i<l;i++)
    {
        if(s[i]>=97)
            c++;
        else
            d++;

    }
    if(c>=d)
    {
        for(int i=0;i<l;i++)
        {
            s[i] = tolower(s[i]);
        }

    }
    else
    {
        for(int i=0;i<l;i++)
        {
            s[i] = toupper(s[i]);
        }

    }
    cout<<s<<endl;
}
