#include<iostream>
using namespace std;
int main()
{
    int n,i,p,q,r,h=-1,m=999;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<n; i++)
    {
        if(arr[i]<=m)
        {

            m=arr[i];
            p=i;
        }
        if(arr[i]>h)
        {
            h=arr[i];
            q=i;
        }
    }
    if(p<q)
    {
        p++;
    }

    r=q+(n-1)-p;
    cout<<r<<endl;
}

