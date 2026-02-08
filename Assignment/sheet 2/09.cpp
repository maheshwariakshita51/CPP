//Check Anagram Strings
#include<iostream>
using namespace std;
#include<vector>
#include<map>
bool areAnagrams(string str1, string str2)
{
    if(str1.length()!=str2.length())
    {
        return false;
    }
    map<char,int>frqc1;
    map<char,int>frqc2;
    for(auto it:str1)
    {
        frqc1[it]++;
    }
    for(auto it:str2)
    {
        frqc2[it]++;
    }
    return frqc1==frqc2;
}
int main()
{
    string str1="sadder";
    string str2="dreads";
    if(areAnagrams(str1,str2))
    {
        cout<<"anagram";
    }
    else{
        cout<<"not anagram";
    }
}
