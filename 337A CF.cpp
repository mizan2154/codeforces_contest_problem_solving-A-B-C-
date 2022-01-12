#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,i,a,b,r;
    cin>>n>>m;
    int arr[m];
    for(i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+m);
    a=arr[m-1]-arr[0];
    for(i=n;i<=m;i++)
    {
        b=arr[i-1]-arr[i-n];
        b=abs(b);
        a= min(a,b);

    }

    cout<<a<<endl;

}
