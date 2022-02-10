#include<iostream>
using namespace std;
int main()
{
    long long int i,n,a,b,r,s;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a>>b;
        if(a==b)
            s=0;
        else if(a>b)
        {
            r=a-b;
            if(r%2!=0)
                s=2;
            else
                s=1;

        }
        else
        {
            r=b-a;
            if(r%2==0)
                s=2;
            else
                s=1;
        }
        cout<<s<<endl;

    }
}
