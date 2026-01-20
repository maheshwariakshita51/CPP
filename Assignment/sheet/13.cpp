//first non duplicate elements

#include<iostream>
using namespace std;
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
char firstnonrepeatingchar(string str)
{
    string temp="";
    for(int i=0 ; i<str.length() ; i++)
    {
        int flag =0;
        if(!linearsearch(temp,str[i]))
        {
            temp+=str[i];
            for(int j=i+1 ; j<str.length() ; j++)
            {
                if(str[i]==str[j])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                return str[i];
            }
        }
    }
    return '*';
}
int main()
{
    string str="aaabhsjjjjjjjahuggghj";
    cout<<firstnonrepeatingchar(str);
}