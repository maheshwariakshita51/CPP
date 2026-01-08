//count vowel
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
void countvowel(string str)
{
    string vowel="AEIOUaeiou";
    int count=0;
    for(auto ch:str)
    {
        if(linearsearch(ch,vowel)) count++;
        
    }
    cout<<"total vowel = "<<count;
}
int main()
{
    string str = "akshitamaheshwari";
    countvowel(str);
}