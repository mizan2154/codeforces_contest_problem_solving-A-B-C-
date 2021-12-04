#include<iostream>
using namespace std;
int main()
{
    int n,k,a,b,c;
    cin>>n>>k;
    while(k!=0)
    {
        a=n%10;
        if(a!=0)
        {
            n--;
        }
        else
            n=n/10;

        k--;
    }
    cout<<n<<endl;
}
