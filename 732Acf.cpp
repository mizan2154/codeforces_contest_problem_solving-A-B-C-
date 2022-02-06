#include<iostream>
using namespace std;
int main()
{
    int n,a,b,r,p=1;
    cin>>a>>b;
    while(1)
    {
        n=a*p;
        r=n%10;
        if(r==0)
        {
            cout<<p<<endl;
            break;
        }
        else if(r==b)
        {
            cout<<p<<endl;
            break;
        }
        else
            p++;
    }
}
