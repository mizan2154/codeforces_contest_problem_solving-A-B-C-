#include<iostream>
using namespace std;
int main()
{
    int i,n,a,c=1;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    a=arr[0];
    for(i=1;i<n;i++)
    {
        if(a!=arr[i])
        {
             c++;
             a=arr[i];

        }
        else
            a=arr[i];

    }
    cout<<c<<endl;
}
