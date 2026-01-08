//remove duplicate from sentence
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
string removeduplicate(string str)
{
    string res="";
    for(auto ch:str)
    {
        if(!linearsearch(ch,res))
        {
            res = res+ch;
        }
    }
    return res;
}
string removeduplicatefromsentence(string str)
{
    string word="";
    string newstr="";
   for(auto ch:str)
   {
    if(ch!=' ')
    {
        word = word+ch;
    }
    else
    {
        newstr += removeduplicate(word);
        newstr+=" ";
        word="";
    }
   }
   newstr += removeduplicate(word);
   return newstr;

}
int main()
{
    string str = "akshissta is good parsoooonn";
    cout<<removeduplicatefromsentence(str);
}