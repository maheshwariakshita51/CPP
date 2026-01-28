#include<iostream>
using namespace std;
int main()
{
    int n=7,s=1;
    for(int i=n ; i>0 ;i--)
    {
        s = s*i;
    }
    cout<<"factorial of "<<n<<" : "<<s;
}