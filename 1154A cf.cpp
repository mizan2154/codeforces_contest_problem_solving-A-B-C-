#include<iostream>
using namespace std;
int main()
{
    int n,i,c=0,min,max;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];

    }
    min=arr[0];
    max=arr[0];
    for(i=0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            c++;
        }
        if(arr[i]<min)
        {
            min=arr[i];
            c++;
        }
    }
    cout<<c<<endl;
}
