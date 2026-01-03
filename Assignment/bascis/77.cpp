#include<iostream>
using namespace std;
int main()
{
    float n,prod=1;
    cout<<"Enter n: ";
    for(int i=1;i<=4;i++)
    {
    cin>>n;
    prod*=n;
    }
    cout<<"product = "<<prod;
}