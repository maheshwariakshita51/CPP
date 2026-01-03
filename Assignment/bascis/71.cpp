#include<iostream>
using namespace std;
int main()
{
    float n,sum=0;
    cout << "Enter an integer: ";
    for(int i=1;i<=7;i++)
    {
        cin>>n;
        sum+=n;
    }
    cout<<"avg= "<<sum/7;
}