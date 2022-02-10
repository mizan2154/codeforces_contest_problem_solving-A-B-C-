#include<iostream>
using namespace std;
int main()
{
    long long int i,n,c=0,b=0,s,j,r,p,q,m;
    cin>>n;
    for(i=0; i<n; i++)
    {

        cin>>s;
        if(s<10)
            r=s;
        else
        {
            r=9;

            for(j=10; j<=s; j++)
            {
                c=0;
                p=j%10;
                m=j;

                while(m!=0)
                {
                    q=m%10;
                    if(q!=p)
                        c++;
                    m=m/10;
                }
                if(c==0)
                    r++;
            }

        }
        cout<<r<<endl;
    }
}
