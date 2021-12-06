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
            cout<<"TEsttttttttttttt ="<<t<<endl;
    }
    cout<<"TEst1 ="<<t<<endl;
    p=a/4;
    t=t+p;
    a=a%4;
      cout<<"TEstttt1 ="<<t<<endl;
    r=b/2;
    b=b%2;
    t=t+r;
    cout<<"TEst2 ="<<t<<endl;
    if(a==c)
    {
        t=t+a;
        a=0;
        c=0;
        cout<<"TEst3 ="<<t<<endl;
    }

    else
    {
        if(a>c)
        {
            t=t+c;
            a=a-c;
            c=0;
            cout<<"TEst4 ="<<t<<endl;
        }

        else
        {
            t=t+a;
            c=c-a;
            a=0;
            cout<<"TEst5 ="<<t<<endl;
        }

    }
    cout<<"TEst6 ="<<t<<endl;
    if(b!=0 && a!=0)
    {
        if(a==b)
        {
            t=t+a;
            a=0;
            b=0;
             cout<<"TEst7 ="<<t<<endl;
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

                cout<<"TEst8 ="<<t<<endl;
            }

            else
            {
                t=t+a;
                b=b-a;
                a=0;
                cout<<"TEst9 ="<<t<<endl;
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
        cout<<"TEst10 ="<<t<<endl;
    }

    t=t+b;
    cout<<"TEst11 ="<<t<<endl;
    t=t+c;
    cout<<"TEst12 ="<<t<<endl;
    cout<<t<<endl;
}
