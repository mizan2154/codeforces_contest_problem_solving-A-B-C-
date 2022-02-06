#include<iostream>
using namespace std;
int main()
{
    long long int i,m,t,s;
    cin>>m>>t;
    long long int arr[t];
    for(i=0;i<t;i++)
    {
        cin>>arr[i];
    }
    s=arr[0];
    for(i=0;i<t-1;i++)
    {
        if(arr[i]==arr[i+1])
            s=s;
        else if(arr[i]<arr[i+1])
            s=s+(arr[i+1]-arr[i]);
        else
            s=s+(m-arr[i])+arr[i+1];
    }
    cout<<s-1<<endl;
}
