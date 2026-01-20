//VALID ANAGRAMS
#include<bits/stdc++.h>
using namespace std;
bool isidentical(string str1,string str2)
{
    if(str1.length()!=str2.length())
    {
        return false;
    }
    map<char,int>freqcount1;
    map<char,int>freqcount2;
    for(auto it:str1)
    {
        freqcount1[it]++;
    }
    for(auto it:str2)
    {
        freqcount2[it]++;
    }
    return freqcount1==freqcount2;
}
int main()
{
    string str1="listen";
    string str2="silentt";
    cout<< isidentical(str1,str2);
}