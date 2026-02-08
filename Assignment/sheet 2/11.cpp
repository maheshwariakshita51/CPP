// First Non-Repeating Character
#include<iostream>
using namespace std;
#include<vector>
#include<map>
bool linearsearch(string str,char ch)
{
    for(auto it:str)
    {
        if(it==ch)
        {
            return true;
        }
    }
    return false;
}
char nonrepeating(string str)
{
    string temp="";
    for(int i=0;i<str.length();i++)
    {
        int flag=0;
        if(!linearsearch(temp,str[i]))
        {
            temp+=str[i];
            for(int j=i+1 ; j<str.length();j++)
            {
                if(str[i]==str[j])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                return str[i];
            }
        }
    }
    return '*';
}
int main()
{
    string str="aasshitaakmcdjs";
    cout<<nonrepeating(str);
}
