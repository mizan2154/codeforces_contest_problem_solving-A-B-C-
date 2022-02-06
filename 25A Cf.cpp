#include<iostream>
using namespace std;
int main()
{
    int n,i,p=0;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
            p++;
    }
    for(i=0; i<n; i++)
    {
        if(p>1)
        {
            if(arr[i]%2!=0)
            {
                cout<<i+1<<endl;
                break;
            }

        }
        else
        {
            if(arr[i]%2==0)
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }
}
