//Count word in a string

#include<iostream>
using namespace std;
int main()
{
    // 2nd METHOD
    string s="  cat  vat  bat";
    int count =0;
    int word = 0;
    for(int i=0 ; i<s.size() ; i++)
    {
        if(s[i] !=' ')
        {
            word++;
        }
        else if(word>0)
        {
            count++;
            word=0;
        }
    }
    if(word>0){
        count++;
    }
    cout<<count;








    //1st METHOD

    // string s="cat vat bat";
    // int count=0;
    // for(int i=0 ;i<s.size() ;i++)
    // {
    //     if(s[i] == ' ')
    //     {
    //         count++;
    //     }
    // }
    // cout<<count+1;
}