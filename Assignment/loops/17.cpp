#include<iostream>
using namespace std;
int main()
{
    int n,min=9,x;
    cout<<"Enter n: ";
    cin>>n;
    while (n)
    {
        x = n%10;
        if(min>x)   min=x;
        n/=10;
    }
    cout<<"smalles no. "<<min;
}