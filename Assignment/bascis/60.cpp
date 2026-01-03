#include<iostream>
using namespace std;
int main()
{
int n,largest;
cin>>largest;
for(int i=1 ; i<6; i++)
{
    cin>>n;
    if(n>largest)
        largest = n;
}
cout<<"largest number : "<<largest;
}