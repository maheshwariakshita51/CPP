#include<iostream>
using namespace std;
int main()
{
int a,b,c,d,e;
cout<<"enter 5 integer: ";
cin>>a>>b>>c>>d>>e;
int small=a;
if(b<small) small=b;
if(c<small) small=c;
if(d<small) small=d;
if(e<small) small=e;
cout<<"smallest no. is: "<<small;

}