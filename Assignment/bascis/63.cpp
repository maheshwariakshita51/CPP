#include<iostream>
using namespace std;
int main()
{
int n,prod=1;
	cout<<"enter the value of n: ";
	cin>>n;
    for (int i=1 ; i<=n ; i++)
    {
        prod = prod*i;
    }
    cout<<"factorial "<<prod;
}