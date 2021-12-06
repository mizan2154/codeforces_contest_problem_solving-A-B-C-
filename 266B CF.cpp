#include<iostream>
using namespace std;
int main()
{
    int n,l,a,b,i,j;
    cin>>n>>a;
    char arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    while(a!=0)
    {
        for(i=0;i<n;i++)
        {
            if(arr[i]=='B' && arr[i+1]=='G')
            {
                swap(arr[i],arr[i+1]);
                i++;
            }

        }
        a--;
    }
     for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
}
