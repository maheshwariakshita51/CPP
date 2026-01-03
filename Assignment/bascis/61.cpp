#include<iostream>
using namespace std;
int main()
{

int n,i,count=0;
	cout<<"enter the value of n: ";
	cin>>n;

for(i=1;i<=n;i++)
{
if (n%i==0)
count++;
}
if(count==2)
cout<<"prime no.";
else
cout<<"not prime ";

}