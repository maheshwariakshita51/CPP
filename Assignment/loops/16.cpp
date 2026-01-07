#include<iostream>
using namespace std;
int main()
{
    int n,max=0,x;
    cout<<"Enter n: ";
    cin>>n;
    while (n)
    {
        x = n%10;
        if(max<x)   max=x;
        n/=10;
    }
    cout<<"largest no. "<<max;
}