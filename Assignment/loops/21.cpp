#include<iostream>
using namespace std;
int main()
{
    int n,count=0,x;
    cout<<"Enter n: ";
    cin>>n;
    while(n)
    {
        x=n%10;
        n/=10;
     if(x==8)
        count++;
  
    }
  cout<<" total count of 8 in a digit = "<<count;
}