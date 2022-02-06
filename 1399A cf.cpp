#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,t,arr[1000],c;
    cin>>t;
    for(i=0;i<t;i++)
    {
        c=0;
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        sort(arr,arr+n);
        for(j=0;j<n-1;j++)
        {
            if(arr[j+1]-arr[j]>1)
                c++;
        }
        if(c==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
