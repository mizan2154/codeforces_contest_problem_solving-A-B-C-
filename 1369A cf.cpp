#include<iostream>
using namespace std;
int main()
{
    int i,n,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        if(n%4==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
