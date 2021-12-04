#include<iostream>
using namespace std;

int main()
{
    int l;
    string str;
    cin>>str;
    l=str.length();
    if(str[0]>=97)
        str[0]=str[0]-32;
    cout<<str<<endl;

}
