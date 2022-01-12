#include<iostream>
using namespace std;
int main()
{
    int n,p,s=0;
    double r;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>p;
        s=s+p;
    }

    r=(s*1.0)/n;
    cout<<r<<endl;
}
