#include<iostream>
using namespace std;
int main()
{
    int n,i,a,b,c,d=0,e=0,f=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        d=d+a;
        e=e+b;
        f=f+c;
    }
    if(d==0 && e==0 && f==0)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
}
