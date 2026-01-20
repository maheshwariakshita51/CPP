//how many times it occur
#include<iostream>
using namespace std;
int linearsearch(string str,char ch)
{
    int count=0;
    for(int i=0 ; i<str.length();i++)
    {
        if(str[i]==ch)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    string str="akshitaaa";
    char ch='a';
    int ans = linearsearch(str,ch);
    cout<<"the count of that alphabet : "<<ans;
}