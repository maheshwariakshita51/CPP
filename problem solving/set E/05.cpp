#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter three number : ";
    cin>>a>>b>>c;
    if(a>b && b>c)
        cout<<"greatest number "<<a;
    else if(b>a && b>c)
        cout<<"greatest number "<<b;
    else if(c>a && c>b)
        cout<<"greatest number "<<c;
        return 0;
}