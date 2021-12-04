#include<iostream>
using namespace std;

int main()
{
    int n,p,a,b=0,c=0;
    cin>>n;
    p=n;
    while(n!=0)
    {
        a=n%10;
        if(a==4 || a==7)
            b++;
        c++;
        n=n/10;
    }
    if(b==c)
        cout<<"YES"<<endl;
    else

    {
        if(p%4==0 || p%7==0 || p%47==0 || p%44==0 || p%77==0 || p%447==0 || p%444==0 || p%474==0 || p%477==0 || p%744==0 || p%774==0 || p%747==0 || p %777==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
