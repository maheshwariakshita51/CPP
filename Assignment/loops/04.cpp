#include<iostream>
using namespace std;
int main()
{
    int n,i=1,s=0;
    cout<<"Enter n: ";
    cin>>n;
    while(i<=n)
    {
        if(i%2!=0)
        s+=i;
        i++;
    }
    cout<<s;
}