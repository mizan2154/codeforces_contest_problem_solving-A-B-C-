#include<iostream>
using namespace std;
int main()
{
    long long int n,p,a,b,c=0;
    cin>>n>>p;
    if(n%2==0)
    {
       a=n/2;
    }
    else
        a=(n/2)+1;

    if(p>a)
    {
        c=(p-a)*2;
    }
    else
        c=(p*2)-1;

    cout<<c<<endl;
}
