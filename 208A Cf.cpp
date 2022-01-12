#include<iostream>
using namespace std;
int main()
{
    string s;
    int i,j=0;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            if(j!=0)
            {
                cout<<" ";
            }

            i+=2;
        }
        else
        {
             cout<<s[i];
             j++;
        }

    }
}
