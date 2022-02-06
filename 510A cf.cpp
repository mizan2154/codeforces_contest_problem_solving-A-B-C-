#include<iostream>
using namespace std;
int main()
{
    int i,j,n,c=0,a,b;
    cin>>a>>n;
    for(j=0; j<a; j++)
    {
        if(j%2==0)
        {
            for(i=0; i<n; i++)
            {
                cout<<"#";
            }
            cout<<endl;
            c++;
        }
        else if(c%2!=0)
        {
            for(i=0; i<n-1; i++)
            {
                cout<<".";
            }
            cout<<"#";
            cout<<endl;

        }
        else if(c%2==0)
        {
            cout<<"#";
            for(i=1; i<n; i++)
            {
                 cout<<".";
            }

            cout<<endl;

        }
    }
}
