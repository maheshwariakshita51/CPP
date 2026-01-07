#include<iostream>
using namespace std;
int main()
{
    int n,prod=1;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        prod=prod*i;
    }
    cout<<"factorial is "<<prod;
}