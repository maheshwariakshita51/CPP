// Count Vowels in a String
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
bool isvowel(string str)
{
    string vowel="aeiouAEIOU";
    for(auto it:str)
    {
        if(linearsearch(vowel,it))
        {
            return true;
        }
    }
    return false;
}
int main()
{
    string str="education";
    cout<<isvowel(str);
}

