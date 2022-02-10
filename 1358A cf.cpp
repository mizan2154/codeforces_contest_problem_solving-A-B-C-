#include<iostream>
using namespace std;
int main()
{
    int i,n,a,b,r;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        r=a*b;
        if(r%2==0)
        {
            r=r/2;
        }
        else
            r=(r/2)+1;

        cout<<r<<endl;

    }
}
