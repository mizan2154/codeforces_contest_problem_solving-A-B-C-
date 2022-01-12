#include<iostream>
using namespace std;
int main()
{
    string p,q;
    cin>>p>>q;
    int i;
    for(i=0;i<p.size();i++)
    {
        if(p[i]==q[i])
            cout<<0;
        else
            cout<<1;
    }
    cout<<endl;
}
