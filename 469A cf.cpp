#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,t,p,arr[1000],arr2[1000],c=0;
    cin>>n>>t;
    for( i=0;i<t;i++)
    {
        cin>>arr[i];
    }
    cin>>p;
    for(i=t;i<t+p;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+t+p);

    if(arr[0]!=1 || arr[t+p-1]!=n)
        c++;
    for(i=0;i<t+p-1;i++)
    {
       if(arr[i+1]-arr[i]>1)
        c++;
    }
    if(c==0)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;

}
