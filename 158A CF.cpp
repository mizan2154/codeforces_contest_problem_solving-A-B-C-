#include<iostream>
using namespace std;

int main()
{
    int t,p,a[100],i,j,c=0;
    cin>>t>>p158;
    for(i=1;i<=t;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=t;i++)
    {
        if(a[i]>0 && a[i]>=a[p])
            c++;
        else
            break;
    }
    cout<<c<<endl;
}
