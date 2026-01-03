#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout << "Enter an integer: ";
    for(int i=1;i<=6;i++)
    {
           cin >> n;
           if(n%2!=0)
           {
             sum = sum+n;
           }
    }
    cout<<"sum of odd no."<<sum;
}