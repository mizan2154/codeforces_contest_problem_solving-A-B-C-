#include<iostream>
using namespace std;
int main()
{
    long long int i,t,n,a,b,r;
    cin>>t;
    for(i=0;i<t;i++)
    {
         cin>>a>>b;
    if(a==b)
        r=0;
    else if(a<b)
    {
        n=b-a;
        r=n/10;
        if(r*10!=n)
            r++;
    }
    else
    {
        n=a-b;
        r=n/10;
        if(r*10!=n)
            r++;
    }
    cout<<r<<endl;
    }

}
