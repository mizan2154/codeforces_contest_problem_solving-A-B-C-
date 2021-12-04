#include<iostream>
using namespace std;
int main()
{
    int l,i,j,a=0,b=0;
    string player;
    cin>>player;
    l=player.length();
    for (i=0; i<l; i++)
    {
        if(player[i]=='0' && a<7)
        {
            b++;
            a=0;
        }
        else if(player[i]=='1' && b<7)
        {
            a++;
            b=0;
        }
    }
    if(a>=7 || b>=7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
