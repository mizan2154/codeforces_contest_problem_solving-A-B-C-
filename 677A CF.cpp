#include<iostream>
using namespace std;
int main()
{
    int n,s,a,c=0;
    cin>>n>>s;
    while(n!=0)
    {
        cin>>a;
        if(a<=s)
            c++;
        else
            c+=2;

    n--;
    }
    cout<<c<<endl;
}
