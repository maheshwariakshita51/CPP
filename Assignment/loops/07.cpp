#include<iostream>
using namespace std;
int main()
{
    int n,s=0, x;
    cout<<"Enter n: ";
    cin>>n;
    int temp=n;
    while(n!=0)
    {
        x=n%10;
        s=(s*10)+x;
        n=n/10;

    }
    if(s==temp)
        cout<<"pallidrome";
    else
        cout<<"not a pallidrome";

}