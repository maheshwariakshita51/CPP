//replace all space with @
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
string replacespace(string str)
{
    string space=" ";
    string res="";
    for(auto ch:str)
    {
        if(!linearsearch(ch,space))  res+=ch;
        else  res +="@";
    }
    cout<<res;
}
int main()
{
    string str = "my name is akshita";
    replacespace(str);
}