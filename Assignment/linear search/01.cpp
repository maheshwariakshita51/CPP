// char found
#include<iostream>
using namespace std;
bool linearseach(char key , string str)
{
    for(int i=0;i<str.length() ; i++)
    {
        if(str[i]==key)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    string str = "akshita";
    char key = 'z';
    if(linearseach(key , str))
    {
        cout<<"EF";
    }
    else
    {
        cout<<"ENF";
    }
}