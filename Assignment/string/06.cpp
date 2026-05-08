//replace space with @

#include<iostream>
using namespace std;
int main()
{
    string s="ap pl e";
    for(int i=0 ;i<s.size()-1 ;i++)
    {
        if(s[i] == '  ')
        s[i] ='@';
    }
    cout<<s;


//2nd method
    // for(auto &x:s){
    //     if(x==' ')
    //     x='@';
    // }
    // cout<<s;
}