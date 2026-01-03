#include<iostream>
using namespace std;
int main()
{
float n;
float sum=0;
	cout<<"enter the value of n: ";
	for(int i=1;i<=4;i++)
    {
        cin>>n;
        sum+=i;
    }
    cout<<"average "<<sum/4;
}