#include<iostream>
using namespace std;
int main()
{
    int n,a;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter a: ";
    cin>>a;
    while(n%a==0)
    {
        n/=a;
    } 
    if(n==1)
    cout<<"power of "<<a;
    else
    cout<<"not a power of "<<a;
    
}