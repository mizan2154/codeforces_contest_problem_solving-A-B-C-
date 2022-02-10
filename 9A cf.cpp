#include<iostream>
using namespace std;
int main()
{
    int i,n,a,b,p,q=6;
    cin>>a>>b;

    if(a>=b)
        p=6-a+1;
    else if(b>a)
        p=6-b+1;

        if(p%2==0)
        {
             p=p/2;
             q=q/2;
        }
        else if(p%3==0)
        {
            p=p/3;
            q=q/3;
        }
        if(p==q)
        {
            p=1;
            q=1;
        }
       cout<<p<<"/"<<q<<endl;




}
