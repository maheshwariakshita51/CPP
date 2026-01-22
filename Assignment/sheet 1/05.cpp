#include<iostream>
#include<vector>
using namespace std;
int linearsearch(string str, char ch)
{
    for(int i=str.length()-1 ; i>=0 ; i--)
    {
        if(str[i]==ch)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    string str = "ahbgvdchy";
    char ch = 'y';
    cout<<linearsearch(str,ch);
}