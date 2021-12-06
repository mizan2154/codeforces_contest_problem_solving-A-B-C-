
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0,b=0,c=0,t=0,d,e,i,r,p;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
            a++;
        else if(arr[i]==2)
            b++;
        else if(arr[i]==3)
            c++;
        else
            t++;
    }
    if(c<=a)
    {
         t=t+a;
            c=c-a;
            a=0;

    }

    p=a/4;
    t=t+p;
    a=a%4;

    r=b/2;
    b=b%2;
    t=t+r;

    if(a==c)
    {
        t=t+a;
        a=0;
        c=0;

    }

    else
    {
        if(a>c)
        {
            t=t+c;
            a=a-c;
            c=0;

        }

        else
        {
            t=t+a;
            c=c-a;
            a=0;

        }

    }

    if(b!=0 && a!=0)
    {
        if(a==b)
        {
            t=t+a;
            a=0;
            b=0;

        }

        else
        {
            if(a>b)
            {
                t=t+b;
                if(a>1)
                {
                   a=a-b-1;
                }
                else
                {
                    a=a-b;
                }

                b=0;

            }

            else
            {
                t=t+a;
                b=b-a;
                a=0;

            }

        }
    }
    if(a!=0)
    {
        d= a/4;
        e=a%4;
        t=t+d;
        if(e>0)
        {
            t=t+1;
        }

    }

    t=t+b;

    t=t+c;

    cout<<t<<endl;
}
