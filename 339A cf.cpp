#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p[100],l,i,j=0;
    string s;
    cin>>s;
    l=s.length();
    for(i=0;i<l;i++)
    {
        if(s[i]!='+')
        {
            p[j]=s[i]-'0';
            j++;
        }
    }
    sort(p,p+j);
    for(i=0;i<j;i++)
    {
        if(i>0)
            cout<<"+";
        cout<<p[i];
    }
}
