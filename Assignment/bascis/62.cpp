#include<iostream>
using namespace std;
int main()
{
int n,x,s=0;
	cout<<"enter the value of n: ";
	cin>>n;
    int temp = n;
    while(n>0)
    {
         x= n%10;
         s = (s*10)+x;
         n/=10;
    }
        if(s==temp)
            cout<<"pallidrome";
        else
            cout<<"not a pallidrome";
}