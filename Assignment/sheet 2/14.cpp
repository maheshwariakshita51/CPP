//Count Words in a String 

#include<iostream>
using namespace std;
#include<vector>
#include<map>
int countwords(string str)
{
    vector<string>word;
    string tempstr="";
    for(auto it:str)
    {
        if(it!=' ')
        {
            tempstr+=it;
        }
        else
        {
            if(tempstr!="")
            {
                word.push_back(tempstr);
            }
            tempstr="";
        }
    }
    if(tempstr!="")
    {
        word.push_back(tempstr);
    }
    return word.size();
}
int main()
{
    string str="i love c++ programming i ii yr i  i ";
    cout<<countwords(str);
}
