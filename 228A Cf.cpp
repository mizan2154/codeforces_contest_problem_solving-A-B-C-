#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[1000],i,j,c=0,s=0,f=0;
    for(i=0; i<4; i++)
    {
        cin>>a[i];
    }
    sort(a,a+4);
    for(i=0; i<3; i++)
    {
        if(a[i]==a[i+1])
            c++;
    }

    cout<<c<<endl;
}
