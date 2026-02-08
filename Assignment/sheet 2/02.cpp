//  Character Existence in String
#include<iostream>
using namespace std;
#include<vector>
#include<map>
bool charExists(string str, char ch)
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
int main()
{
    string str = "akshita";
    char ch = 'y';
    if(charExists(str,ch))
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
