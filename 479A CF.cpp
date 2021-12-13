#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l;
    cin>>a>>b>>c;
    d= a+(b*c);
    e=a*(b+c);
    f=a*b*c;
    g=(a+b)*c;
    k=a+b+c;
    h=max(d,e);
    i=max(f,g);
    l=max(h,i);
    j=max(l,k);
    cout<<j<<endl;
}
