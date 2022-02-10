#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,t,arr[100],arr2[100],c,p,k;
    cin>>t;
    for(i=0;i<t;i++)
    {
        p=0;
        cin>>n;
        n=2*n;
        for(j=0;j<n;j++)
        {
            cin>>arr[j];
            if(j==0)
            {
                arr2[p]=arr[j];
                p++;
            }

            else
            {
                c=0;
                for(k=0;k<j;k++)
                {
                    if(arr[j]==arr[k])
                        c++;
                }
                if(c==0)
                {
                    arr2[p]=arr[j];
                    p++;
                }

            }
        }

        for(j=0;j<p;j++)
        {
            cout<<arr2[j];
            if(j!=p-1)
                cout<<" ";
        }
        cout<<endl;
    }
}
