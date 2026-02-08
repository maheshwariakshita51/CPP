// Character Frequency Greater Than 2
#include<iostream>
using namespace std;
#include<vector>
#include<map>
map<char,int> printCharFreq(string str)
{
    map<char,int>frqc;
    map<char,int>result;
    for(int i=0 ; i<str.length();i++)
    {
        frqc[str[i]]++;
    }
    for(auto it:frqc)
    {
        if(it.second>2)
        {
            result[it.first]=it.second;
        }
    }
    return result;
}
int main()
{
    string str="aaabbcccddddeeeeffghijjk";
    map<char,int> ans = printCharFreq(str);
    for(auto it:ans)
    {
        cout<<it.first<<" : "<<it.second<<"\n";
    }
}
