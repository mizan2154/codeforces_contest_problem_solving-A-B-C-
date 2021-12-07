
#include<iostream>
using namespace std;
int main()
{
    int n,a,b,r,c=0;
    cin>>n;
    while(n!=0)
    {
        cin>>a>>b;
        r=b-a;
        if(r>=2)
            c++;
        n--;
    }
    cout<<c<<endl;
}
