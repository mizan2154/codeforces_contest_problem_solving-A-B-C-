#include<iostream>
#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
    int i,j,a[100][100],c,b;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            if(a[i][j]==1)
            {
                c= abs(i-3)+ abs(j-3);
                cout<<c<<endl;
                break;
            }

        }
    }


}
