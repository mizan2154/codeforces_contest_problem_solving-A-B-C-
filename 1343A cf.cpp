#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int t,n,k,p=0,q=1,r;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        p=0;
        q=2;
        while(p!=1)
        {
            k= pow(2,q);
            r=n/(k-1);
            if(n%r==0)
            {
                cout<<r<<endl;
                p++;
            }
            else
                q++;
        }

    }
}
