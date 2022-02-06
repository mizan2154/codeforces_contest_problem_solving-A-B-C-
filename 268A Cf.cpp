#include<iostream>
using namespace std;
int main()
{
    int i,j,n,c=0,s=0;
    cin>>n;
    int arr[n][n];
    for(i=0; i<n; i++)
    {
        for(j=0; j<2; j++)
            cin>>arr[i][j];
    }
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i][0]==arr[j][1])
                c++;
            if(arr[i][1]==arr[j][0])
                c++;

        }

    }

    cout<<c<<endl;
}
