#include<iostream>
using namespace std;
int main()
{
    int t,i,n,p,r,l,c,j,k,arr[100];
    cin>>t;
    for(i=0; i<t; i++)
    {
        p=1;
        c=0;
        cin>>n;
        while(n!=0)
        {
            l=n%10;
            if(l==0)
            {
                p=p*10;
            }
            else
            {
                arr[c]=p*l;
                c++;
                p=p*10;
            }
            n=n/10;
        }
        cout<<c<<endl;
        for(k=0; k<c; k++)
        {
            cout<<arr[k];
            if(k!=c-1)
                cout<<" ";
        }
        cout<<endl;
    }
}
