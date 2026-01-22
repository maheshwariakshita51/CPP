//1. Character Search 
#include<iostream>
using namespace std;
int linearsearch(string str,char ch)
{
    for(int i=0 ; i<str.length() ; i++)
    {
        if(str[i]==ch)
        { 
        return i;
        }
    }
    return -1;
}
int main()
{
    string str="akshita";
    char ch='o';
    int ans = linearsearch(str,ch);
    cout<<"index value is :"<<ans;

}

