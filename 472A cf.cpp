#include<iostream>
using namespace std;
int main()
{
    int n,p=4,q=9,r;
    cin>>n;
    if(n%2==0)
    {
        cout<<p<<" "<<n-p<<endl;
    }
    else
    {
        cout<<q<<" "<<n-q<<endl;
    }

}
