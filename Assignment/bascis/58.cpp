#include<iostream>
using namespace std;
int main()
{
string str;
cout<<"string: ";
cin>>str;
for(int i=str.length() ; i>=0 ; i--)
{
    cout<<str[i];
}
}