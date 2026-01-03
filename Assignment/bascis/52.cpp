#include<iostream>
using namespace std;
int main()
{
string str;
cout<<"string: ";
cin>>str;
for(int i=0;i<str.length()+1;i++)
{
    cout<<str[i]<<endl;
}
}