//FIRST REPEATING CHAR
#include<iostream>
using namespace std;
char firstrepeatingchar(string str)
{
    for(int i=0 ; i<str.length() ; i++)
    {
        for(int j=i+1 ; j<str.length() ; j++)
        {
            if(str[i]==str[j])
            {
                return str[i];
            }
        }
    }
    return '*';
}
int main ()
{
    string str="absssjkkkkk";
    cout<<firstrepeatingchar(str);
}

