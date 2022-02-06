#include<iostream>
using namespace std;
int main()
{
    int i,n,t,r,s=0,c=0;
    cin>>n>>t;
    for(i=1;i<=n;i++)
    {
        r=5*i;
        s=s+r;
        if(s+t<=240)
            c++;
    }
    cout<<c<<endl;

}

