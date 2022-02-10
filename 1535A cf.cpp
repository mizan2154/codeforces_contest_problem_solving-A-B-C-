#include<iostream>
using namespace std;
int main()
{

    int a,b,s,n,i,c,d,r;
    cin>>n;
    for(i=0;i<n;i++)
    {
         cin>>a>>b>>c>>d;
         if(b>a)
            swap(a,b);
         if(d>c)
            swap(c,d);

         if(b>c || d>a)
            cout<<"NO"<<endl;
         else
            cout<<"YES"<<endl;
    }


}
