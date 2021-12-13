#include<iostream>
using namespace std;
int main()
{
    int n,a=0,d=0,i,l;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]=='A')
            a++;
        else
            d++;
    }
    if(a==d)
        cout<<"Friendship"<<endl;
    else if(a>d)
        cout<<"Anton"<<endl;
    else
        cout<<"Danik"<<endl;
}
