#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,m,d,e=-1,l;
    double r;
    cin>>n>>m;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(i=0; i<n-1; i++)
    {
        d=arr[i+1]-arr[i];
        if(d>=e)
        {
            e=d;
        }

    }
    r=(e*1.0)/2.0;
    l=m-arr[n-1];
    if(l>arr[0])
        arr[0]=l;
    if(arr[0]>r)
        r=arr[0];
    cout<<fixed<<setprecision(10)<<r<<endl;

}
