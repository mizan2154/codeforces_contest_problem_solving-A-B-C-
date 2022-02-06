#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    vector<int>s;
    int i,j,a;
    for(i=0;i<4;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(i=0;i<4;i++)
    {
        for(i=0;i<4;i++)
        {
            if(v[i]==v[j])
               s.push_back(v[i]);
        }
    }
    for(i=0;i<s.size();i++)
    {
        cout<<s[i]<<endl;
    }
}

