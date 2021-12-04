#include<iostream>
using namespace std;
int main()
{
    int n,a,b,p=0,d=0;
    cin>>n;
    while(n!=0)
    {
        cin>>a>>b;
        p=(p-a)+b;
        if(p>=d)
        {
            d=p;
        }
        n--;
    }
    cout<<d<<endl;
}
