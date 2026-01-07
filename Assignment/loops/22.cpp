#include<iostream>
using namespace std;
int main()
{
    int n,count=0,a=7;
    cout<<"Enter n: ";
    cin>>n;
    while(n)
    {
        if(n%a==0)
        count++;
        n/=a;
    }
    if(n==1)
    cout<<"power of "<<a<<"\n";
    else
    cout<<"not a power of "<<a;
    cout<<"count "<<count;
}