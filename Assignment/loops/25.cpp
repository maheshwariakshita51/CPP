#include<iostream>
using namespace std;
int main()
{
    int n,last,first;
    cout<<"Enter n: ";
    cin>>n;
    last = n%10;
    int temp=n;
    while(temp>=10)
    {
        temp=temp/10;
    }
    first=temp;
    cout<<"first digit "<<first<<"\n";
    cout<<"last digit "<<last<<"\n";
    for(int i=1;i<=first;i++)
    {
    cout<<i<<" ";
    }
    
}