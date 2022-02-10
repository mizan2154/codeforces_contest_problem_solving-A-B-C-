#include<iostream>
using namespace std;
int main()
{
    int i=1,n,s=0,r,c=0;
    cin>>n;
    while(n>0)
    {
        s=s+i;
        n=n-s;
        if(n>=0)
            c++;
        i++;
    }
    cout<<c<<endl;
}
