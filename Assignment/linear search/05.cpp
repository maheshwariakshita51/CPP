//count vowel and consonent
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
void countalpha(string str)
{
    string vowel = "aeiouAeiou";
    int vow=0,con=0;
    for(auto ch:str)
    {
        if(linearsearch(ch,vowel))
        vow++;
        else
        con++;
    }
    cout<<"vowel = "<<vow<<endl;
    cout<<"consonent = "<<con<<endl;
}
int main()
{
    string str="akshitamaheshwari";
    countalpha(str);
}
