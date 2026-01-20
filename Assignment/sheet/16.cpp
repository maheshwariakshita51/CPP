//remove vowel from string 
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
string removevowel(string str)
{
    string vowel="aeiouAEIOU";
    string res="";
    for(auto ch:str)
    {
        if(!linearsearch(ch,vowel))
        {
            res+=ch;
        }
    }
    return res;
}
int main()
{
    string str="akshita";
    cout<<removevowel(str);
}