#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter two number: ";
    cin>>a>>b;
    c=a;
    a=b;
    b=c;
    cout<<"after swapping\n";
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

}