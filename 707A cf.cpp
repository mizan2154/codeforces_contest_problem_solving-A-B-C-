#include<iostream>
using namespace std;
int main()
{
    int i,n,m,a,c=0;
    char ch;
    cin>>n>>m;
    a=n*m;
    for(i=0; i<a; i++)
    {
        cin>>ch;
        if(ch=='C' || ch=='M'|| ch=='Y')
            c++;
    }
    if(c>0)
        cout<<"#Color"<<endl;
    else
        cout<<"#Black&White"<<endl;
}
