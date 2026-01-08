//count num of spacefrom string
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
void countspace(string str)
{
    string space=" ";
    int count=0;
    for(auto ch:str)
    {
        if(linearsearch(ch,space))
        count++;
    }
    cout<<"count of space = "<<count;
}
int main()
{
    string str="my name is akshita";
    countspace(str);
}