#include<iostream>
using namespace std;
int main()
{
    int n,a,s,c=0;
    cin>>n;
    s=n;
    while(n!=0)
    {
        cin>>a;
        if(a==0)
            c++;
        n--;
    }
    if(c==s)
        cout<<"EASY"<<endl;
    else
        cout<<"HARD"<<endl;
}
