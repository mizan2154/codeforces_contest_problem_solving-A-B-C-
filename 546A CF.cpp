#include<iostream>
using namespace std;

int main()
{
    int k,n,w,a=0,b;
    cin>>k>>n>>w;
    while(w!=0)
    {
        a= a+(k*w);
        w--;
    }
    b= a-n;
    if(b<0)
    {
        b=0;
        cout<<b<<endl;
    }
    else
        cout<<b<<endl;

}
