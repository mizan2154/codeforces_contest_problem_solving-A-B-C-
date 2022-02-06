#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a,t;
    string s;
    map<string,int>reg;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>s;
        if(reg[s]==0)
        {
            cout<<"OK"<<endl;
            reg[s]=1;
        }
        else
        {
            cout<<s<<reg[s]<<endl;
            reg[s]++;
        }
    }
}
