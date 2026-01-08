//remove duplicate
#include<iostream>
using namespace std;
bool linearsearch(char key , string str)
{
    for(int u=0;u<str.length() ; u++)
    {
        if(str[u]==key)
        {
            return true;
        }
    }
    return false;
}
string removeduplicate(string str)
{
    string res="";
    for(int i=0;i<str.length() ; i++)
    {
        if(!linearsearch(str[i],res))
        {
            res=res+str[i];
        }
    }
    return res;
}
int main()
{
    string str = "aksshita";
    cout<<removeduplicate(str);
}