//replace vowel with @

#include<iostream>
using namespace std;
int main()
{
    string s= "acdop";
    for(int i =0;i<s.size()-1 ; i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' )
        {
            s[i] ='@';
        }
    }
    cout<<s;
}