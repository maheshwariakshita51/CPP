//replace vowel with #
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
void replacespace(string str)
{
    string vowel="aeiouAEIOU";
    string replace ="";
    for(auto ch:str)
    {
        if(!linearsearch(ch,vowel))
        replace+=ch;
        else
        replace+="#";
    }
    cout<<replace;
}
int main()
{
    string str="my name is akshita";
    replacespace(str);
}