#include<iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],i;

    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(i=0; i<n; i++)
    {
        cout<<arr[i];
        if(i!=n-1)
            cout<<" ";
    }
    cout<<endl;
}
