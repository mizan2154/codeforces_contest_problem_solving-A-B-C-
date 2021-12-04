#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100],sum=0,sum1=0,i,n,c=0,j;

    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];

    }
    sum=sum/2;
    sort(arr,arr+n);
    for(j=n-1;j>=0;j--)
    {
        sum1+=arr[j];
        c++;
        if(sum1>sum)
        {
            cout<<c<<endl;
            break;
        }
    }
}
