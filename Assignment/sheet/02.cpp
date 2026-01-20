//last index value
#include<iostream>
using namespace std;
int linearsearch(string str,char ch)
{
    int index=-1;
    for(int i=0 ; i<str.length() ; i++)
    {
        if(str[i]==ch)
        {
            index = i;
        }
    }
    return index;
}
int main()
{
    string str="akshita";
    char ch='a';
    int ans = linearsearch(str,ch);
    cout<<"the index value is : "<<ans;
}