#include<iostream>
using namespace std;
int main()
{
    int n,x,s=1;
    cout<<"Enter n: ";
    cin>>n;
      while(n>0)
    {
        x=n%10;
        s=s*x;
        n=n/10;
    }
    cout<<"prod of digit "<<s;
}