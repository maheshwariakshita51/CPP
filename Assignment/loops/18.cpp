#include<iostream>
using namespace std;
int main()
{
    int n,x,s=0;
    cout<<"Enter n: ";
    cin>>n;
    int temp=n;
    while(n)
    {
        x= n%10;
        s=s + (x*x*x);
        n/=10;
    }
        if(temp==s)
        cout<<"armstrong ";
        else
        cout<<"not a armstrong";
}