//remove special char from string
#include<iostream>
using namespace std;
bool linearsearch(char key , string str)
{
    for(auto ch:str)
    {
        if(ch==key)
        {
            return true;
        }
    }
    return false;
}
void removespecial(string str)
{
    string special="!@#$%^&*(){}[]<>?,./''/*-+";
    string res="";
    for(auto ch:str)
    {
        if(!linearsearch(ch,special))
        res+=ch;
    }
    cout<<res;
}
int main()
{
    string str="aks[%$#@#$%]hit%^&*a";
    removespecial(str);
}