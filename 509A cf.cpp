#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    int arr[100][100];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==0 || j==0)
                arr[i][j]=1;
            else
                arr[i][j]=arr[i-1][j]+arr[i][j-1];
        }
    }
    cout<<arr[n-1][n-1]<<endl;

}
