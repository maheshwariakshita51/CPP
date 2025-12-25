#include<iostream>
using namespace std;
int main()
{
string str1,str2,temp;
cout<<"enter str1= ";
cin>>str1;
cout<<"enter str2= ";
cin>>str2;
temp=str1;
str1=str2;
str2=temp;
cout<<"swapping str1 = "<<str1<<"  str2= "<<str2;
}