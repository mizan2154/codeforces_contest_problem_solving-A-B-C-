#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,t,i,c=0;
    cin>>s>>t;
    pair <int,int>a[t];
    for(i=0;i<t;i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    sort(a,a+t);
    for(i=0;i<t;i++)
    {
        if(a[i].first>=s)
        {
            c++;
            break;
        }

        else
        {

            s=s+a[i].second;
        }
    }
    if(c>0)
        cout<<"NO"<<endl;

    else
        cout<<"YES"<<endl;
}
