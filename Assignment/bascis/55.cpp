#include<iostream>
using namespace std;
int main()
{
int n,sum=0;
cout<<"enter n : ";
for(int i=0;i<10;i++)
{
    cin>>n;
    sum+=n;
}
cout<<"sum of all digit = "<<sum;
}