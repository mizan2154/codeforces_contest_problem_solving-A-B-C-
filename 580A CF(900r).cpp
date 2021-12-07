#include<iostream>
using namespace std;
int main()
{
    int n,a=0,b=0,c=0,m=1,i;
    cin>>n;
    int arr[n],arr1[n];
    for(i=0; i<n; i++)
    {

        cin>>arr[i];
        if(arr[i]>=arr[i-1])
        {
            c++;
            m=max(c,m);
        }
        else
            c=1;
    }
    cout<<m<<endl;
}
