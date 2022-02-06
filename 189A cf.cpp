
#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c,r=0;
    cin>>n>>a>>b>>c;
    if(n==a && n==b && n==c)
    {
        r++;
    }
    else if(a+b+c<n)
    {
        r=n;
    }
    else
    {
        if(a==n)
            r++;
        if(b==n)
            r++;
        if(c==n)
            r++;
        if(a+b==n)
            r++;
        if(a+c==n)
            r++;
        if(b+c==n)
            r++;
        if(a+c+b==n)
            r++;


    }

    cout<<r<<endl;
}
