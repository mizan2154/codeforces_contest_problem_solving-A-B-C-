#include<iostream>
using namespace std;
int main()
{
    long long int i,r,n;
    r=-1;
    cin>>n;
    if(n%2==0)
        r=n/2;
    else
        r=(n/2)-n;
    cout<<r<<endl;
}
