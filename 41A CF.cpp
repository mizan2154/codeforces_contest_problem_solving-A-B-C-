#include<iostream>
using namespace std;

int main()
{
    int m,n,i,j,c=0;
    string s,t;
    cin>>s>>t;
    m=s.length();
    n=t.length();
    if(m==n)
    {
        for(i=0; i<m; i++)
        {
           if(s[i]!=t[n-1])
           {
               c++;
           }

            n--;
        }
      if(c==0)
      {
          cout<<"YES"<<endl;
      }
      else
        cout<<"NO"<<endl;
    }
    else
        cout<<"NO"<<endl;

}
