#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=0;
    string s;
    getline(cin,s);
    sort(s.begin(),s.end());
    for(int i=0;i<s.size()-2;i++)
    {
        if(s[i]=='{}' || s[i]==',' || s[i]==' ')
            continue;
        else
        {
            if(s[i]!=s[i+1])
                c++;
        }
    }
    cout<<c<<endl;
}
