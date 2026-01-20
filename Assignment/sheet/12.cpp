// FIRST DUPLICARTE ELIMENT

#include<bits/stdc++.h>
using namespace std;
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
char findduplicate(string str)
{
    string temp="";
    for(auto it:str)
    {
        if(!linearsearch(temp,it))
        {
            temp+=it;
        }
        else
        {
            return it;
        }
    }
    return '*';
}
int main()
{
    string str="asksshitaaaa";
    cout<<findduplicate(str);
}




