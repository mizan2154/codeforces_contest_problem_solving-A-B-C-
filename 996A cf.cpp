#include<iostream>
using namespace std;
int main()
{
    long long int n,i,s,r=0;
    cin>>n;
    int arr[5]={100,20,10,5,1};
    for(i=0;i<5;i++)
    {
        s=n/arr[i];
        r=r+s;
        n= n- (s*arr[i]);

    }
    cout<<r;
}
