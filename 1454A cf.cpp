#include<iostream>
using namespace std;
int main()
{
    int i,n,t,j,e;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        e=n/2;
        int arr[n];
        for(j=n;j>0;j--)
        {
            arr[j]=j;
        }
        if(n%2!=0)
            swap(arr[e],arr[e+1]);
        for(int j=n;j>0;j--)
        {
            cout<<arr[j];
            if(j!=1)
                cout<<" ";
        }
        cout<<endl;
    }
}
