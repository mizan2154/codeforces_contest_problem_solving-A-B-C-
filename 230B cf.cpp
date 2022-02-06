#include<iostream>
using namespace std;
int main()
{
    long long int i,j,n,s,a;
    cin>>n;
    for(j=1; j<=n; j++)
    {
        cin>>s;
        a=0;
        for(i=1; i<=s; i++)
        {
            if(s%i==0)
                a++;
        }
        if(a==3)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}
