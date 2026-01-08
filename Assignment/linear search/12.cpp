//convert uppercase and lowecase
#include<iostream>
using namespace std;
void convalpha(string str)
{
    string res="";
    for(auto ch:str)
    {
        if(ch>=65 && ch<=90)
        res+=ch+32;
        else
         res+=ch-32;
    }
    cout<<"result string "<<res;
}
int main()
{
    string str="AKShitaMAHESHwari";
    cout<<"given string = "<<str<<endl;
    convalpha(str);
}
